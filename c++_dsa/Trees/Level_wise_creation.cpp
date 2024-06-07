#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            left=right=nullptr;
        }
};
void preordertraversal(Node* root,vector<int>& ans){
    if(root==nullptr){
        return;
    }
    ans.push_back(root->data);
    preordertraversal(root->left,ans);
    preordertraversal(root->right,ans);

}
int main(){
    int x;
    cout<<"Enter root element ";
    cin>>x;
    Node* root=new Node(x);
    queue<Node*> q;
    q.push(root);
    int first,second;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<"Enter left child of "<<temp->data<<" : ";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter right child of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
    vector<int> ans;
    preordertraversal(root,ans);
    cout<<"Inorder traversal : ";
    for(auto itr:ans){
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;

}