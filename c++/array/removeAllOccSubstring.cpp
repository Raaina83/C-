#include<iostream>
using namespace std;

string removeSubString(string &s){
    string part="abc";
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s="dababccbbsabc";
    cout<<removeSubString(s);
}