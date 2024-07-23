#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& v);

int main(){
    vector<int> v={3,5,7,1,2,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<check(v);
}

bool check(vector<int>& v){
    int count=0;
    for(int i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            count++;
        }
    }
    if(v[0]<v[v.size()-1]){
        count++;
    }
    return count<=1;
}