#include<iostream>
using namespace std;

class hero{
    int health;
    public:
    hero(int health){
        this->health = health; //this stores address of current object!!
    }
};