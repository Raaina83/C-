#include<iostream>
using namespace std;

class employee{
public:    
    string name;
    string company;
    int age;

    void intoduction(){
        cout<<"name is "<< name<<endl;
        cout<<"age is "<< age<<endl;
        cout<<"company working for is "<< company<<endl;
    }
    employee(string n,string c,int a){  //CONSTRUCTOR(should be public)
        name=n;
        company=c;
        age=a;
    }
};
int main(){
    employee emp1 = employee("raaina","google",18);
    employee emp2= employee("priya","amazon",18);
    emp1.intoduction();
    emp2.intoduction();
    return 0;
}