#include<iostream>
#include<vector>
using namespace std;

void rotateArr(vector<int>& v,int k);

int main(){
    int n,k;
    cout<<"Enter length for the array:"<<endl;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cout<<"Enter value for "<<i<<" index ";
        cin>>v.at(i);
    }
    cout<<"Enter the index at which you want to rotate the array:"<<endl;
    cin>>k;
    cout<<"Before rotating-->";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    rotateArr(v,k);
    cout<<endl;
    cout<<"After rotating-->";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}

void rotateArr(vector<int>& v,int k){
    vector<int> temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[(i+k)%v.size()]=v[i];
    }
    v=temp;
}