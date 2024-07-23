#include<iostream>
using namespace std;

int length(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    // cout<<"length->"<<i<<endl;
    return i;
}

void reverse(char name[]){
    int s=0,e=length(name)-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
    // cout<<name;
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    // name[2]='\0';
    cout<<"length-->"<<length(name)<<endl;
    cout<<"Your name is "<<name<<endl;
    reverse(name);
    cout<<name;
    return 0;
}