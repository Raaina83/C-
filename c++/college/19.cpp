#include<iostream>
using namespace std;

class Volume{
    int vol;
    public:
    void volume(int a,int b,int c){
        vol=a*b*c;
    }
    void volume(int a){
        vol=a*a*a;
    }
    void display(){
        cout<<"Volume of polygon is "<<vol<<endl;
    }
};

int main(){
    Volume cube,cuboid;
    // cube.volume(3);
    // cube.display();
    cuboid.volume(3,4,5);
    cuboid.display();
    return 0;
}