#include<iostream>
#include<stack>
using namespace std;

bool balanceBrackets(string s){
    stack<char> temp;
    for(int i=0;i<s.length();i++){
        char x = s[i];
        if(temp.top() == '}' || ')' || ']'){
            return false;
        }
        if(temp.empty()){
            temp.push(s[i]);
        }

        else if(temp.top() == '(' && s[i]== ')' || temp.top() == '{' && s[i]== '}' || temp.top() == '[' && s[i]== ']'){
            temp.pop();
        }

        else{
            temp.push(s[i]);
        }
    }

    if(temp.empty()){
        return true;
    } 

    return false;
}

int main(){
    string s1= "}{()}[]";
    cout<<balanceBrackets(s1);    

    return 0;
}