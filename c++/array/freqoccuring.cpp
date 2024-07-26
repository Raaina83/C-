#include<iostream>
using namespace std;
//how many times does an element occur in an array
//array can only have upto 10^6 in main, hence use hashmap!
int main() {
   int n,p;
   cin>>n>>p;
   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   } 
   int newArr[p+1] = {0};
   for(int i=0; i<n; i++){
    newArr[arr[i]]++;
   }
   for(int i=0; i<p+1;i++){
    cout<<i<<" "<<newArr[i]<<endl;
   }
}