#include<bits/stdc++.h>
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
Node* insert(Node* root,int data){
    if(!root){
        return new Node(data);
    }
    if(data<root->data){
        root->left=insert(root->left,data);
    }else{
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(vector<int>& traversal,Node* root){
    if(!root){
        return;
    }
    inorder(traversal,root->left);
    traversal.push_back(root->data);
    inorder(traversal,root->right);
}
void preorder(vector<int>& traversal,Node* root){
    while(root!=nullptr){
        if(root->left==nullptr){
            traversal.push_back(root->data);
            root=root->right;
        }else{
            Node* temp=root->left;
            while(temp->right!=nullptr && temp->right!=root){
                temp=temp->right;
            }
            if(temp->right==nullptr){
                traversal.push_back(root->data);
                temp->right=root;
                root=root->left;
            }else{
                temp->right=nullptr;
                root=root->right;
            }
        }
    }
}
void print(vector<int>& temp){
    for(auto itr:temp){
        cout<<itr<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the Number of Nodes ";
    cin>>n;
    Node* root=nullptr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        root=insert(root,temp);
    }
    vector<int> traversal1,traversal2;
    inorder(traversal1,root);
    preorder(traversal2,root);
    print(traversal1);
    print(traversal2);
    return 0;
}