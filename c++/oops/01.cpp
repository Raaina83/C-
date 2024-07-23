#include<iostream>
using namespace std;
// iocfiw
// hoidhco

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
    
};
int main(){
    employee emp1;
    emp1.name="Raaina";
    emp1.company="google";
    emp1.age=18;
    emp1.intoduction();
    employee emp2;
    emp2.name="priya";
    emp2.company="amazon";
    emp2.age=18;
    emp2.intoduction();
    return 0;
}