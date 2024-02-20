#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data=data;
            this->next=nullptr;
        }
};
int main(){
    node* node1=new node(5);
    cout<<"Data :- "<<node1->data<<endl;
    cout<<"Next :- "<<node1->next<<endl;
}