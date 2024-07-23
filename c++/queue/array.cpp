#include<iostream>
using namespace std;

class Queue{
    int front,rear,size;
    int *arr;
    public:
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int el){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        } 
        else{
            arr[rear] = el;
            rear++;
        }
    }

    void pop(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front==rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int empty(){
        if(front == rear){
            return 1;
        }
        else{
            return 0;
        }
    }

    int qfront(){
        if(front == rear){
            cout<<"Empty queue"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main(){
    Queue q(4);
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(7);
    q.push(10);
    // q.pop();
    // q.pop();
    cout<<"Front element: "<<q.qfront()<<endl;
    cout<<"Empty or not: "<<q.empty();
    return 0;
}