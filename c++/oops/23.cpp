#include<iostream>
using namespace std;
//MULTILEVEL INHERITANCE- A-->B-->C
class Student{
    protected:
        int rollno;
    public:
        void setrollno(int r){
            rollno=r;
        }
        int getrollno(){
            return rollno;
        }
};

class Exam:public Student{
    protected:
        float physics;
        float maths;
    public:
        void setmarks(float m1,float m2){
            physics=m1;
            maths=m2;
        }
        float getphysics(){
            return physics;
        }
        float getmaths(){
            return maths;
        }
};

class Result:public Exam{
    float percentage;
    public:
        void display(){
            cout<<"Roll number of student is "<<getrollno()<<endl;
            cout<<"Your marks in physics and maths are: "<<getphysics()<<","<<getmaths()<<endl;
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main(){
    Result raaina;
    raaina.setrollno(224083);
    raaina.setmarks(94.5,83);
    raaina.display();
    return 0;
}