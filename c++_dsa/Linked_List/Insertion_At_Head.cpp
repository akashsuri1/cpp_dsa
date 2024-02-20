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
//by refernce to make change in orignal linkedlist no copy
void insertAtHead(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void print(node* &head){
    node* ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    node* head=nullptr;
    node* firstnode=new node(10);
    head=firstnode;
    //intilization

    print(head);
    insertAtHead(head,20);
    insertAtHead(head,30);
    print(head);
    return 0;
}
