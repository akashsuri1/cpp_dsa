#include<iostream>
#include<vector>
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
Node* Binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return nullptr;
    }
    Node* temp=new Node(x);
    cout<<"Left child of "<<x<<" : ";
    temp->left=Binarytree();
    cout<<"Right child of "<<x<<" : ";
    temp->right=Binarytree();
    return temp;
}
vector<vector<int>> levelorder(Node* root){
    vector<vector<int>> ans;
    if(root==nullptr){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        while(size--){
            Node* temp=q.front();
            q.pop();
            if(temp->left!=nullptr){
                q.push(temp->left);
            }   
            if(temp->right!=nullptr){
                q.push(temp->right);
            }         
            level.push_back(temp->data);
        }
        ans.push_back(level);

    }
    return ans;

}
int main(){
    cout<<"Enter root : ";
    Node* root=Binarytree();
    //level order traversal
    vector<vector<int>> ans=levelorder(root);
    for(auto vctr: ans){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}
