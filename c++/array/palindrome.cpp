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

int toLowerCase(char s){
    if(s>='a' && s<='z'){
        return s;
    }
    else{
        return s-'A'+'a';
    }
}

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

int palindrome_check(char arr[]){
    int s=0,e=length(arr)-1;
    while(s<=e){
        if(valid(arr[s]) && valid(arr[e])){
            if(toLowerCase(arr[s++])==toLowerCase(arr[e--])){

            }
            else{
                return 0;
            }
        }
        else if(!valid(arr[s])){ //if not a valid character then just simply ignore and move on to next one!!
            s++;
        }
        else if(!valid(arr[e])){ //if not a valid character then just simply ignore and move on to next one!!
            e--;
        }
    }
    return 1;
}

int main(){
    char arr[40]={"A man, a plan, a canal: Panama "};
    cout<<"Palindrome or not: "<<palindrome_check(arr);
}