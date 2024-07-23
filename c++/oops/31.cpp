#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id=a;
        price=b;
    }

    void getData(){
        cout<<"The id is "<<id<<endl;
        cout<<"The price of item is "<<price<<endl;
    }
};

int main(){
    int size=3;
    Shop *ptr=new Shop[size];
    Shop *tempPtr=ptr;
    for(int i=0;i<size;i++){
        int p;
        float q;
        cout<<"Enter the id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++; //When loop ends ptr will point to address outside of array!Hence make sure to temporarily store ptr!!
    }
    for(int i=0;i<size;i++){
        cout<<" Item number: "<<i+1<<endl;
        tempPtr->getData();
        tempPtr++;
    }
}