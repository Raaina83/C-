#include <iostream>
using namespace std;
class Volume{
    int vol;
    public:
    void volume(int a,int b,int c){
      vol=a*b*c;
    }
    void volume( int a){
    vol=a*a*a;
    }  
    void display(){
        cout<<"the volume is"<<vol<<endl;
    }
};
    int main(){
        Volume cube ,cuboid;
        cube.volume(7);
        cube.display();
        cuboid.volume(4,5,3);
        cuboid.display();

    }




    
