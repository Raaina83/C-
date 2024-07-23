#include<iostream>
using namespace std;
//new and delete(pointers revisison)
int main(){
    int a=5;
    int *ptr=&a;
    cout<<"the value of a is "<<*ptr<<endl;
    //new keyword/operator
    int *p= new int(7);
    cout<<"The value at address p is "<<*p<<endl;
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=40;
    delete[] arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    return 0;
}