#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            left=nullptr;
            right=nullptr;
        }
};
void print(Node* root){
    if(root==nullptr){
        return;
    }
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
}
int main(){

    Node* root=new Node(10);
    root->right=new Node(30);
    root->left=new Node(20);
    print(root);
    return 0;
}