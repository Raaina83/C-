#include<iostream>
using namespace std;

char maxOcc(string s);

int main(){
    string s;
    cout<<"Enter string: "<<endl;
    cin>>s;
    cout<<maxOcc(s)<<endl;
}

char maxOcc(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        int number=0;
        if(s[i]>='a' && s[i]<='z'){ //lower case
            number=s[i]-'a';
        } 
        else{
            number=s[i]-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a' + ans;
    return finalAns;
}