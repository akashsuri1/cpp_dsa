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
void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert(Node* &head,Node* &tail,int position,int data){
    Node* toinsert=new Node(data);
    if(position==0){
        toinsert->next=head;
        head=toinsert;
        return;
    }
    int cnt=0;
    Node* temp=head;
    //one less because we have to reach one step behind only
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
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    Node* firstnode=new Node(10);
    head=firstnode;
    tail=firstnode;
    insert(head,tail,0,5);
    print(head);
    insert(head,tail,1,7);
    print(head);
    insert(head,tail,3,30);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}
