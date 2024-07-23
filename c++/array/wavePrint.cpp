#include<iostream>
using namespace std;

void wavePrint(int arr[3][3],int nrows,int mcols){
    int i=0,j=0;
    for(int col=0;col<mcols;col++){
        //odd
        if(j%2!=0){
            for(int i=nrows;i<0;i--){
                cout<<arr[i-0][j]<<" ";
            }
            j++;
    }
        //odd
        else{
            for(int i=0;i<nrows;i++){
                cout<<arr[i][j]<<" ";
            }
            j++;
        }
    }
}

int main(){
    int arr[3][3]={{3,4,11},{2,12,1},{7,8,17}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    wavePrint(arr,3,3);
}