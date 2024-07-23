#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={1,4,5,10,-18,25,45,12,8,9};
    cout<<"Enter the element to start search:"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"The entered element is present in array"<<endl;
    }
    else
    cout<<"The entered element is NOT present in array"<<endl;
    return 0;
}