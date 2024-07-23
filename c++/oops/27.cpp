#include<iostream>
using namespace std;
//VIRTUAL BASE CLASS!!(TO AVOID AMBIGUITY)
class Student{
    protected:
    int roll_no;
    public:
    void set_rollno(int a){
        roll_no=a;
    }    
    void print_rollno(){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
}; 

class Test:virtual public Student{
    protected:
        float maths,physics,chemistry;
    public:
        void set_marks(float a,float b,float c){
            maths=a;
            physics=b;
            chemistry=c;
        }
        void print_marks(){
            cout<<"Your result is as follows:"<<endl
                <<"Maths:"<<maths<<endl
                <<"Physics:"<<physics<<endl
                <<"Chemistry:"<<chemistry<<endl;
        }
};

class Sports:virtual public Student{
    protected:
        float score;
        public:
        void set_score(int a){
            score=a;
        }
        void print_score(){
            cout<<"Your PT score is:"<<score<<endl;
        }
};

class Result:public Test, public Sports{
    private:
        float total;
    public:
        void final_result(){
            total=maths+physics+chemistry+score;
            print_rollno();
            print_marks();
            print_score();
            cout<<"Your total score(out of 400)is: "<<total<<endl;
        }
};

int main(){
    Result Raaina;
    Raaina.set_rollno(224083);
    Raaina.set_marks(98.5,94,85.75);
    Raaina.set_score(89);
    Raaina.final_result();
    return 0;
}