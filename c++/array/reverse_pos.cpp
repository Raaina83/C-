#include<iostream>
#include<vector>
using namespace std;

vector<int> reversePos(vector<int> v,int pos);
void printVector(vector<int> v);

int main(){
    vector<int> v;
    v.push_back(13);
    v.push_back(16);
    v.push_back(20);
    v.push_back(7);
    v.push_back(4);
    v.push_back(10);
    printVector(v);
    printVector(reversePos(v,1));
}

vector<int> reversePos(vector<int> v,int pos){
    int s=pos+1,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}