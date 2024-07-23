#include<iostream>
using namespace std;

class Student{
    protected:
    int rollNo;
    public:
    void set_rollNo(int a){
        rollNo=a;
    }
    void get_rollNo(){
        cout<<"Roll number :"<<rollNo<<endl;
    }
};

class Test:virtual public Student{
  protected:
  int maths,oops;
  public:
  void set_marks(int a,int b){
    maths=a;
    oops=b;
  }  
  void get_marks(){
    cout<<"Maths: "<<maths<<endl;
    cout<<"OOPS: "<<endl;
  }
};

class Sports:virtual public Student{
    protected:
    int score;
    public:
    void set_score(int b){
        score=b;
    }
    void get_score(){
        cout<<"Score: "<<score<<endl;
    }
};

class Result: public Test,public Sports{
    int total;
    public:
    void disp(){
        get_rollNo();
        total=(maths+oops+score);
        cout<<"Your total score is:"<<total;
    }
};

int main(){
    Result obj;
    obj.set_rollNo(100);
    obj.set_marks(87,86);
    obj.set_score(78);
    obj.disp();
    return 0;
}