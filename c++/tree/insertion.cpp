#include<iostream>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int d){
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

Tree* buildTree(Tree* root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    root = new Tree(data);
    if(data == -1){
        return NULL;
    } 

    cout<<"Enter the data left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void inOrder(Tree* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Tree* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Tree* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    Tree* root = NULL;

    root = buildTree(root);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}