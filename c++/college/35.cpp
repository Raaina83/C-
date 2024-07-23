#include<iostream>
using namespace std;

class SignUp{
    int id,password;
    public:
    void sign_up(){
        cout<<"Enter your id:"<<endl;
        cin>>id;
        cout<<"Enter your password:"<<endl;
        cin>>password;
    }
    void dispUp(){
        cout<<"Registered"<<endl;
    }
};

class SignIn{
    int id,password;
    string name;
    public:
    void sign_in(){
        cout<<"Enter your id:"<<endl;
        cin>>id;
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your password:"<<endl;
        cin>>password;
    }
    void dispIn(){
        cout<<"You are now logged in"<<endl;
    }
};

class User: public SignIn,SignUp{
    int n;
    public:
    void get(){
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(n==1){
        sign_up();
        dispUp();
    }
    else if(n==2){
        sign_in();
        dispIn();
    }
    else{
        cout<<"Enter right number please(1 or 2)"<<endl;
    }
    }
};

int main(){
    User obj;
    obj.get();
    return 0;
}