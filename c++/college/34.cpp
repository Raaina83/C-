#include<iostream>
using namespace std;

class Principal{
    int id;
    string designation;
    string name;
    public:
    void getData(){
        cout<<"Enter the id"<<endl;
        cin>>id;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the designation"<<endl;
        cin>>designation;
    }
    void display(){
        cout<<"The name "<<" is "<<name<<" and "<<" id is "<<id<<endl;
        cout<<"Designation is "<<designation<<endl;
    }
};

class Teacher:public Principal{
    string subject;
    public:
    void getDataT(){
        getData();
        cout<<"Enter the subject"<<endl;
        cin>>subject;
    }
    void displayT(){
        display();
        cout<<"The subject is "<<subject<<endl;
    }
};

class Student:public Teacher{
    string course;
    int courseFee;
    public:
    void getDataS(){
        getDataT();
        cout<<"Enter the name of your course:"<<endl;
        cin>>course;
        cout<<"Enter the course fee:"<<endl;
        cin>>courseFee;
    }
    void displayS(){
        displayT();
        cout<<"The fee your course "<<course<<" is "<<courseFee<<endl;
    }
};

int main(){
    Student s1;
    cout<<"Pricipal Details:"<<endl;
    s1.getData();
    s1.display();
    cout<<"teacher Details:"<<endl;
    s1.getDataT();
    s1.displayT();
    cout<<"Student Details:"<<endl;
    s1.getDataS();
    s1.displayS();
    return 0;
}