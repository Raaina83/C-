#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(8);
    s.pop();
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty :"<<s.empty()<<endl;
    return 0;
}