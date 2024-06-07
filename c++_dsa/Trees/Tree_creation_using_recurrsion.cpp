#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
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
    cout<<"Enter left child of "<<temp->data<<" : ";
    temp->left=binarytree();
    cout<<"Enter right child of "<<temp->data<<" : ";
    temp->right=binarytree();
    return temp;
}
void preordertraversal(Node* root,vector<int>& ans){
    if(root==nullptr){
        return;
    }
    ans.push_back(root->data);
    preordertraversal(root->left,ans);
    preordertraversal(root->right,ans);    
}
int main(){
    cout<<"Enter root value : ";
    Node* root=binarytree();
    vector<int> ans;
    preordertraversal(root,ans);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}