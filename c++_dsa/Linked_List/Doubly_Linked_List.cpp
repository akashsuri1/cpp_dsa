#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
    ~Node(){
        int value=this->data;
        next=nullptr;
        prev=nullptr;
        cout<<"The value is "<<value<<endl;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlen(Node* &head){
    Node* temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void insertAthead(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(head==nullptr){
        head=temp;
        tail=temp;
    }else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(tail==nullptr){
        tail=temp;
        head=temp;
    }else{
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
    }
}
void insertMiddle(Node* &head,Node* &tail,int position,int data){
    Node* toinsert=new Node(data);    
    if(position==0){
        if(head==nullptr){
            head=toinsert;
            tail=toinsert;
        }else{
            toinsert->next=head;
            head->prev=toinsert;
            head=toinsert;
        }
        return;
    }
    int cnt=0;
    Node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==nullptr){
        tail->next=toinsert;
        toinsert->prev=tail;
        tail=toinsert;
        return;
    }
    toinsert->next=temp->next;
    temp->next->prev=toinsert;
    temp->next=toinsert;
    toinsert->prev=temp;
}
void DeleteNode(Node* &head,Node* &tail,int position){
    if(position==0){
        Node* temp=head;
        temp->next->prev=nullptr;
        head=temp->next;
        delete temp;
        return;
    }
    int cnt=0;
    Node* curr=head;
    Node* prev=nullptr;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    if(curr->next==nullptr){
        prev->next=curr->next;
        tail=prev;
        delete curr;
        return;
    }else{
        prev->next=curr->next;
        curr->next->prev=prev;
        delete curr;
    }
}
void print_info(Node* &head,Node* &tail){
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    insertAthead(head,tail,10);
    print(head);
    insertAtTail(head,tail,20);
    print(head);
    insertMiddle(head,tail,0,30);
    print(head);
    insertMiddle(head,tail,3,40);
    print(head);
    insertMiddle(head,tail,2,5);
    print(head);
    print_info(head,tail);
    DeleteNode(head,tail,0);
    DeleteNode(head,tail,3);
    DeleteNode(head,tail,1);
    print(head);
    print_info(head,tail);
    Node* temp=tail;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
    return 0;
}