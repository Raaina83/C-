#include<iostream>
using namespace std;

class Accounts{
    int id;
    string name;
    public:
    void get(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your id:";
        cin>>id;
    }
    void disp(){
        cout<<"Name:"<<name<<endl;
        cout<<"Id:"<<id<<endl;
    }
};

class Teacher:public Accounts{
    int salary;
    public:
    void getT(){
        get();
        cout<<"Enter salary:";
        cin>>salary;
    }
    void dispT(){
        disp();
        cout<<"salary:"<<salary<<endl;
    }
};

class Student: public Accounts{
    int courseFee;
    string course;
    public:
    void getS(){
        get();
        cout<<"Enter your course: ";
        cin>>course;
        cout<<"Enter course fee: ";
        cin>>courseFee;
    }
    void dispS(){
        cout<<"Your course: "<<course<<endl;
        cout<<"Course Fee: "<<courseFee<<endl;
    }
};

int main(){
    cout<<"Teacher details: "<<endl;
    Teacher obj1;
    obj1.getT();
    obj1.dispT();
    cout<<"Student details: "<<endl;
    Student obj2;
    obj2.getS();
    obj2.dispS();
    return 0;
}