#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int data){
            this->data=data;
            left=right=NULL;
        }
};
static int idx=-1;
node* buildtree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    node* currnode=new node(nodes[idx]);
    currnode->left=buildtree(nodes);
    currnode->right=buildtree(nodes);

    return currnode;

}

void preorder(node* root){

    if (root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
     
}

void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
bool isidentical(node*root1,node*root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }

    if(root1->data!=root2->data){
        return false;
    }
        return isidentical(root1->left,root2->left) 
               && isidentical(root1->right,root2->right);

}

bool issubtree(node*root,node*subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }
    else if(root==NULL || subroot==NULL){
        return false;
    }

    if(root->data==subroot->data){
        //Identical check for subtree
        if(isidentical(root,subroot)){
            return true;
        }
    }
    int leftstree=issubtree(root->left,subroot);
    int rightstree=issubtree(root->right,subroot);
    if(!leftstree){
        return rightstree;
    }
    return true;

}

int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node*root=buildtree(nodes);

    node* subroot=new node(2);
    subroot->left=new node(4);
    subroot->right=new node(5);

    cout<<issubtree(root,subroot);
    cout<<endl;

}
 