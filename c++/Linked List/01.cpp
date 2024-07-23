#include<iostream>
using namespace std;

class Node{ //DECLARATION 
    public:
    int data;
    Node* next; //a variable next stores address as-->NULL
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
    ~Node(){
        cout<<"memory free"<<endl;
    }
};

void insertAtHead(Node* &head,int d){ //INSERTION!!
    Node* temp=new Node(d); //a new node that has a data and points towards NULL
    temp->next=head;//the pointer that previously pointed towards NULL now points towards head-->head was pointing towards first node(previously)-->first node becomes 2nd one!!
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);//temp is a new node where next points at NULL
    tail->next=temp;//tail->next now stores address of temp->new node->so it points towards next node(data)
    tail=tail->next;//tail now stores address of next node->so it now points towards new node created
}

void insertAtMid(Node* &head,Node* &tail, int pos,int d){
    int count=1;
    if(pos==1){
        insertAtHead(head,d);
        return;
    } 

    Node* temp=new Node(d);
    Node* previous=head;
    while(count<pos-1){
        previous=previous->next;
        count++;
    }
    if(previous->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    temp->next=previous->next;
    previous->next=temp;
    
}

void deleteNode(Node* &head,int pos,Node* &tail){
    if(pos==1){
        Node* current=head;
        current->next=NULL; //even if we delete current from memory it will still point towards the next node,hence make sure to point it to NULL
        head=head->next;
        delete current;
    } else{
        Node* current=head;
        Node* previous=NULL;
        int count=1;
        while(count<pos){
            previous=current;
            current=current->next;
            count++;
        }
        if(current->next==NULL){
            // cout<<count<<endl;
            tail=previous;
            previous->next=NULL;
            delete current;
            return;
        }
        // cout<<"sjsdgiqwodh";
        previous->next=current->next;
        // tail=current->next;
        current->next=NULL;
        delete current;
    }
}

int search(Node* &head,int item){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==item){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void printLIst(Node* &head){
    Node* temp=head; //temp is pointing towards head-->temp has address of first very node
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;//temp now has address of next node-->so it points towards next node
    }
    cout<<endl;
}

int main(){
    Node* node1= new Node(21); //DECLARING IN HEAP
    // cout<<node1->data<<endl;
    Node* head=node1;// a variable that stores address of node1-->so it points towards very first node of node1
    Node* tail=node1;//a variable that stores address of node1
    printLIst(head);
    insertAtTail(tail,13);
    // printLIst(head);
    // insertAtTail(tail,15);
    // printLIst(head);
    insertAtMid(head,tail,2,14);
    printLIst(head);
    insertAtMid(head,tail,2,15);
    // printLIst(head);
    insertAtMid(head,tail,4,18);
    printLIst(head);
    deleteNode(head,4,tail);
    printLIst(head);
    // insertAtHead(head,11);
    // insertAtHead(head,7);
    // printLIst(head);
    // deleteNode(head,3,tail);
    // printLIst(head);
    // cout<<"tail->"<<tail->data<<endl;
    // deleteNode(head,5,tail);
    // printLIst(head);
    // cout<<"tail->"<<tail->data<<endl;
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    cout<<search(head,15);
    return 0;
}