#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char *name = new char[100];
    Hero(int health,char name[]){
        this->health = health;
        this->name = name;
    }

    void print(){
        cout<<"Health-->"<<this->health<<endl;
        cout<<"Name-->"<<this->name<<endl;
    }
};

int main(){
    char s[7]= "Raaina";
    Hero obj1(39,s);
    obj1.print();

    Hero obj2(obj1); //accesses same memory for name
    obj2.print();
    
    char s2[7]= "priya";
    obj1.name[0] = 'P';
    obj1.print();
    obj2.print();
}