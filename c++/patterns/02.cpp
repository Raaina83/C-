#include<iostream>
using namespace std;

void nStarTriangle(int n) {
    for(int i=0; i<2*n-1; i++){
        int stars = i;
        if (i >= n) {
          stars = 2 * n - i -2;
        }
        for(int j=0; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    nStarTriangle(3);
    return 0;
}