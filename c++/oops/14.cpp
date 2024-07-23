#include<iostream>
#include<cmath>
using namespace std;

class point{
    int a,b;
    public:
    point(int x, int y){
        a=x;
        b=y;
    }
    void distance(point o1,point o2){
        int dist;
        int xd=(o1.a-o2.a);
        int yd=(o1.b-o2.b);
        dist=sqrt(pow(xd,2)+pow(yd,2));
        cout<<"The distance between points is"<< dist<<endl;
    }
    void display(){
        cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }
    ~point(){
        cout<<"Destructor called";
    }
};

int main(){
    point c1(9,4);
    point c2(3,2);
    c1.distance(c1,c2);
    c2.distance(c1,c2);
    c1.display();
    c2.display();
    return 0;
}
