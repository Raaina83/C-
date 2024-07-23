#include<iostream>
using namespace std;
// BINARY FUNCTION INPUT AND NESTING OF MEMBERS

class binary{  
private:
    string a;
public:
    void read(){
        cout<<"enter a binary number"<<endl;
        cin>>a;
    }
    void check(){
        for(int i=0;i<a.length();i++){
            // cout<<"running loop"<<endl;
           if(a.at(i)!='0' && a.at(i)!='1'){
            cout<<"invalid binary format"<<endl;
            exit(0);
           }
        }
    }
    void change(){
        check(); //NESTING OF MEMBERS(CAN MAKE THIS FUNCTION PRIVATE IF YOU WANT)
       for(int i=0;i<a.length();i++){
           if(a.at(i)=='0'){
            a.at(i)='1';
           }
           else{
           a.at(i)='0';
           }
        }
    }
    void display(){
        for(int i=0;i<a.length();i++){
            cout<<a.at(i);
        }
    }
};

int main(){
    binary b1;
    b1.read(); //CHECK WHETHER NUMBER IS BINARY OR NOT
    // b1.check();
    b1.change(); //CHANGE 1 TO 0 AND 0 TO 1
    b1.display();
    return 0;
}