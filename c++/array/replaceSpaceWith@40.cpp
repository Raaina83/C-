#include<iostream>
using namespace std;

string replaceSpaces(string &str){
    int l=str.length();
    string s1="@40";
    for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
            str.replace(i,1,s1);
            // temp.push_back('@');
            // temp.push_back('4');
            // temp.push_back('0');
        }
        else{
            // temp.push_back(str[i]);
        }
    }
    return str;
}

int main(){
    string str={"My name is Raaina"};
    cout<<str.length()<<endl;
    cout<<replaceSpaces(str)<<endl;
    cout<<str.length()<<endl;
    return 0;
}