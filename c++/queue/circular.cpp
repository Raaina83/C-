#include<iostream>
using namespace std;

class Queue{
    int front,rear,size;
    int *arr;
    public:
    Queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    int push(int el){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1) && front!=0)){
            cout<<"Queue is full"<<endl;
            return -1;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size-1 && front!=0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = el;
        cout<<"Pushed"<<el<<endl;
        return 1;
    }

    int pop(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
};


int main(){
    Queue q(2);
    q.push(4);
    q.push(12);
    cout<<q.pop()<<endl;
    q.push(9);
    q.push(1);
    return 0;
}