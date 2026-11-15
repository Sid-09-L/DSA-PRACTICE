#include<iostream>
using namespace std;

class node{
    public:
        char data;
        node*left;
        node*right;

        node(char val){
            data=val;
            left=right=NULL;
        }
};
//CREATING general Tree

node*createtree(){
    char val;
    int n;

    cout<<"Enter Node data:";
    cin>>val;

    node*newnode=new node(val);

    cout<<"Enter Number of children of "<<val<<":";
    cin>>n;

    node*previous=NULL;

    for(int i=0;i<n;i++){
        node*child=createtree();

        if(newnode->left==NULL){
            newnode->left=child;
        }
        else{
            previous->right=child;
        }
        previous=child;
    }
    return newnode;
}
//Display Binary tree representation
void converttobinary(node*root){
    if(root==NULL){
        return;
    }
    cout<<"Node:"<<root->data;

    if(root->left!=NULL){
        cout<<"Left child:"<<root->left->data;
    }
    else{
        cout<<"left child NUll";
    }
    if(root->right!=NULL){
        cout<<"Right Child:"<<root->right->data;
    }
    else{
        cout<<"Right child NULL";
    }
    cout<<endl;

    converttobinary(root->left);
    converttobinary(root->right);
}
void preorder(node*root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node*root=NULL;

    cout<<"Create general tree"<<endl;

    root=createtree();

    cout<<"\n Binary Tree representation:"<<endl;
    converttobinary(root);

    cout<<"Preorder Traversal:"<<endl;
    preorder(root);

    return 0;
}