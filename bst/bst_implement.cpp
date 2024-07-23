#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelwiseTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node* root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL) return;

    postorder(root->left);
    cout<<root->data<<" ";
    postorder(root->right);
}

Node* insertToBST(Node* root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertToBST(root->right,d);
    }
    else{
        root->left=insertToBST(root->left,d);
    }
    return root;
}

Node* takeInput(Node* root){
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    while(data!=-1){
        root=insertToBST(root,data);
        cin>>data;
    }
    return root;
}

bool search_BST(Node* root,int x){
    if(root==NULL) return false;
    Node* temp=root;
    while(temp!=NULL){
        if(temp->data==x) return true;
        if(temp->data>x) temp=temp->left;
        else temp=temp->right;
    }
    return false;
}

int main(){
    Node* root=NULL;
    cout<<"Enter the data to create the bst : "<<endl;
    root=takeInput(root);

    cout<<"Level wise data : "<<endl;
    levelwiseTraversal(root);

    // cout<<endl;
    // cout<<"Inorder data : "<<endl;
    // inorder(root);
    // cout<<"\nPreorder data : "<<endl;
    // preorder(root);
    // cout<<"\nPostorder data : "<<endl;
    // postorder(root);

    int x;
    cout<<"\nEnter the data to search : ";
    cin>>x;
    if(search_BST(root,x)) cout<<"Element found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}