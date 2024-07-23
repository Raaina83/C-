#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &v){
    //for swapping(rounds loop)
    for(int i=0;i<v.size()-1;i++){
        //for finding minimum
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
}

void print(vector<int> &v);

int main(){
    vector<int> v;
    int n,el;
    cout<<"Enter the number of values you want to input in an array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element for "<<i<<" index";
        cin>>el;
        v.push_back(el);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    selectionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}