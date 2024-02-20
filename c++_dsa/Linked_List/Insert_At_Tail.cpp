#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=nullptr;
        }
};
void insertAtTail(Node* &Tail,int data){
    Node* temp=new Node(data);
    Tail->next=temp;
    Tail=Tail->next;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* first=new Node(18);
    //intilazation of linked list
    Node* head=first;
    Node* Tail=first;
    print(head);
    insertAtTail(Tail,20);
    insertAtTail(Tail,30);
    print(head);
    return 0;
}
