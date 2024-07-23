#include<iostream>
using namespace std;

void move(int arr[],int size);
void print(int arr[],int size);

int main(){
    int arr[7]={0,1,0,0,3,12,0};
    print(arr,7);
    move(arr,7);
    print(arr,7);
}

void move(int arr[],int size){
    int i=0,j=0;
    while(j<size){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
}

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}