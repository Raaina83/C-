#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v);
int printArr(vector<int> v);

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(14);
    v.push_back(6);
    v.push_back(9);
    v.push_back(13);
    printArr(v);
    printArr(reverse(v));
    return 0;
}

vector<int> reverse(vector<int> v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

int printArr(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}