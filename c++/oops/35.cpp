#include<iostream>
using namespace std;

class CWH{ //abstract base class-->made only because we need derived version of this class!!(needs to have atleast one pure virtual function)
    protected:
    string title;
    float ratings;
    public:
    CWH(string t,float r){
        title=t;
        ratings=r;
    }
    virtual void display()=0; //pure virtual function(will never be used)!!
};

class CWHVideo:public CWH{
    float videolength;
    public:
    CWHVideo(string t,float r,float vl):CWH(t,r){
        videolength=vl;
    }
    void display(){
        cout<<"This a video tutorial on topic:"<<title<<endl;
        cout<<"The ratings of this video tutorial are:"<<ratings<<endl;
        cout<<"length of the video is "<<videolength<<endl;
    }
};

class CWHText:public CWH{
    int words;
    public:
    CWHText(string t,float r,int wc):CWH(t,r){
        words=wc;
    }
    void display(){
        cout<<"This a fun text tutorial on topic:"<<title<<endl;
        cout<<"The ratings of this text tutorial are:"<<ratings<<endl;
        cout<<"No of the words in page is "<<words<<endl;
    }
};

int main(){
    string title;
    float ratings,videolength;
    int words;
    title="django video tutorial";
    ratings=4.65;
    videolength=15.40;
    CWHVideo djtut1(title,ratings,videolength);
    title="django text tutorial";
    ratings=4.01;
    words=500;
    CWHText djtut2(title,ratings,words);
    CWH* tut[2];
    tut[0]=&djtut1;
    tut[1]=&djtut2;
    tut[0]->display();
    tut[1]->display();
}