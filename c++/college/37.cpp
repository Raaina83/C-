#include<iostream>
using namespace std;

class Student{
    protected:
    string name;
    int rollNo;
    public:
    void get(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your roll number:";
        cin>>rollNo;
    }
    void disp(){
        cout<<"Name of student:"<<name<<endl;
        cout<<"Roll number of student:"<<rollNo<<endl;
    }
};

class Marks:public Student{
    protected:
    int sci,maths;
    public:
    void getM(){
        get();
        cout<<"Enter your marks for Science:";
        cin>>sci;
        cout<<"Enter your marks for Maths:";
        cin>>maths;
    }
    void dispM(){
        disp();
        cout<<"Science Marks:"<<sci<<endl;
        cout<<"Maths Marks:"<<maths<<endl;
    }
};

class Sports:public Student{
    protected:
    int spt;
    public:
    string sptName;
    void getS(){
        cout<<"Enter the sports name:"<<endl;
        cin>>sptName;
        cout<<"Enter your sports marks:"<<endl;
        cin>>spt;
    }
    void dispS(){
        cout<<"Marks for "<<sptName<<" are "<<spt<<endl;
    }
};

class Test:public Marks,Sports{
    public:
    void setT(){
        getM();
        getS();
    }
    void dispT(){
        dispM();
        dispS();
        cout<<"Total:"<<(sci+ maths+spt)<<endl;
    }
};

int main(){
    Test obj;
    obj.setT();
    obj.dispT();
    return 0;
}