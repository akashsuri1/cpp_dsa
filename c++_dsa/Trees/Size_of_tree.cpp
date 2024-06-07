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
int getsize(Node* root){
    if(root==nullptr){
        return 0;
    }
    return 1+getsize(root->left)+getsize(root->right);
}
int main(){
    int x;
    cout<<"Enter root value ";
    cin>>x;
    queue<Node*> q;
    Node* root=new Node(x);
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        int left,right;
        cout<<"Enter left child of "<<temp->data<<" : ";
        cin>>left;
        if(left!=-1){
            temp->left=new Node(left);
            q.push(temp->left);
        }
        cout<<"Enter right child of "<<temp->data<<" : ";
        cin>>right;
        if(right!=-1){
            temp->right=new Node(right);
            q.push(temp->right);
        }
    }
    cout<<"No of nodes in the trees is : "<<getsize(root)<<endl;
    return 0;
}