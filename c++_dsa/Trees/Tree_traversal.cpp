#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left,*right;
        Node(int data){
            this->data=data;
            left=right=nullptr;
        }
};
Node* binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return nullptr;
    }
    Node* temp=new Node(x);
    cout<<"Enter left child of "<<x<<" : ";
    temp->left=binarytree();
    cout<<"Enter right child of "<<x<<" : ";
    temp->right=binarytree();
    return temp;
}
void Preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void Postorder(Node* root){
    if(root==nullptr){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=nullptr)
            q.push(temp->left);
        if(temp->right!=nullptr)
            q.push(temp->right);
    }

}

int main(){
    
    cout<<"Enter root value : ";
    Node* root=binarytree(); 
    //traversal
    cout<<"Preorder traversal : ";
    Preorder(root);
    cout<<"\nInorder traversal : ";
    inorder(root);
    cout<<"\npostorder traversal : ";
    Postorder(root);
    cout<<"\nLevelorder traversal : ";
    levelorder(root);
    return 0;




}