#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        cout<<"memory free"<<endl;
    }
};

void insertAtHead(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtPos(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        insertAtHead(head,tail,d);
        return;
    }

    int count=1;
    Node* temp=head;

    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* nodeToInsert=new Node(d); //making new node 
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}

void deleteNode(Node* &head,Node* &tail,int pos){
    // Node* temp=new Node(d);
    if(pos==1){
        Node*temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* current=head;
        Node*previous=NULL;
        int count=1;

        while(count<pos){
            previous=current;
            current=current->next;
            count++;
        }

        if(current->next==NULL){
            tail=previous;
        }

        current->prev=NULL;
        previous->next=current->next;

        if(current->next!=NULL){ //UPDATING PREVIOUS OF NEXT TO  CURRENT NODE IF CURRENT IS NOT LAST 
        current->next->prev=previous;
        cout<<current->next->prev->data<<endl;
        current->next=NULL;
        }
        delete current;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // Node* n1=new Node(4);
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    insertAtHead(head,tail,5);
    insertAtHead(head,tail,8);
    print(head);
    insertAtTail(head,tail,7);
    print(head);
    insertAtPos(head,tail,2,11);
    print(head);
    insertAtPos(head,tail,1,10);
    print(head);
    insertAtPos(head,tail,6,23);
    print(head);
    // deleteNode(head,tail,1);
    // print(head);
    // cout<<"tail->"<<tail->data<<endl;
    deleteNode(head,tail,4);
    // deleteNode(head,tail,6);
    print(head);
    cout<<"tail->"<<tail->data<<endl;
    deleteNode(head,tail,5);
    print(head);
    cout<<"tail->"<<tail->data;
    return 0;
}