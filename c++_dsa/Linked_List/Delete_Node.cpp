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
        ~Node(){
            int value=this->data;
            this->next=nullptr;
            cout<<"Node with value deleted "<<value<<endl;
        }
};
void insertAtPosition(Node* &head,Node*& tail,int position,int data){
    Node* toinsert=new Node(data);
    if(position==0){
        toinsert->next=head;
        head =toinsert;
        return;
    }
    Node* temp=head;
    int cnt=0;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==nullptr){
        tail->next=toinsert;
        tail=tail->next;
        return;
    }
    toinsert->next=temp->next;
    temp->next=toinsert;
}
void print(Node* &head){
    for(Node* temp=head;temp!=nullptr;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}
void deleteNode(Node* &head,Node* &tail,int position){
    if(position==0){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }else{
        int cnt=0;
        Node* prev=nullptr;
        Node* curr=head;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==nullptr){
            prev->next=curr->next;
            tail=prev;
            return;
        }
        prev->next=curr->next;
        delete curr;
    }
}
int main(){
    Node *head=new Node(10);
    Node* tail=head;
    print(head);
    insertAtPosition(head,tail,0,20);
    insertAtPosition(head,tail,1,35);
    insertAtPosition(head,tail,3,40);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    deleteNode(head,tail,0);
    deleteNode(head,tail,1);
    insertAtPosition(head,tail,2,50);
    print(head);
    deleteNode(head,tail,2);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    print(head);
    return 0;
}