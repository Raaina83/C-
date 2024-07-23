#include<iostream>
using namespace std;

bool checkPermuation(string &s1,string &s2);
bool checkEqual(int a[26],int b[26]);

int main(){
    string s2={"a"};
    string s1={"ab"};
    cout<<checkPermuation(s1,s2);
}

bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}

bool checkPermuation(string &s1,string &s2){
    int count1[26]={0};
    //character count array for s1
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }

    //traverse in a window and create a new character array of s2 to compare with s1
    int i=0;
    int windowSize=s1.length();
    int count2[26]={0};
    while(i<windowSize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    //check two arrays
    if(checkEqual(count1,count2)){
        return 1;
    }
    //update the window and keep on checking again(i will be 2 here)
    while(i<s2.length()){
        int newCharIdx=s2[i]-'a';
        count2[newCharIdx]++;

        //delete old char count
        int oldCharIdx=s2[i-windowSize]-'a';
        count2[oldCharIdx]--;

        i++;

        //check again
        if(checkEqual(count1,count2)){
            return 1;
        }
    }
    return 0;
}

