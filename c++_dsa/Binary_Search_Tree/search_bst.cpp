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
bool search(Node* root,int target){
    if(!root){
        return false;
    }
    if(root->data==target){
        return true;
    }
    if(root->data>target){
        return search(root->left,target);
    }else{
        return search(root->right,target);
    }
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
    int target;
    cout<<"Enter the target to search for : ";
    cin>>target;
    if(search(root,target)){
        cout<<target<<" is found in the tree."<<endl;
    }else{
        cout<<"Not found in the tree."<<endl;
    }
    return 0;
}