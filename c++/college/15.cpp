#include<iostream>
using namespace std;

int linearSearch(int arr[],int item,int size);
// int printArray(int arr[],int size);

int main(){
    int arr[10]={1,4,5,2,7,10,45,13,3,11};
    cout<<"Starting Search->"<<endl;
    linearSearch(arr,9,10);
    // printArray(arr,10);
}

int linearSearch(int arr[],int item,int size){
    bool flag=1;
    for(int k=0;k<size;k++){
        if(arr[k]==item){
            flag=0;
            cout<<"Search:Successful";
        }
    }
    if(flag==1){
        cout<<"Search:Unsuccessful";
    }
}