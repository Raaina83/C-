#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr  = new int[size];
        top = -1;
    }

    void push(int el){
        if(top < size - 1){
            top++;
            arr[top] = el;
        } 
        else{
            cout<<"STACK OVERFLOW"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW"<<endl;
        }
    }

    int peek(){
        if(top >= 0 ){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top >= 0){
            return 0;
        }
        else{
            return 1;
        }
    }
};

int main(){
    Stack s(2);
    s.push(5);
    s.push(8);
    s.push(7);
    cout<<s.peek()<<endl;
    // s.push(3); 
    // s.push(2);
    // s.push(1);
    // s.push(4);
    // s.pop();
    // cout<<s.peek();
    return 0;
}