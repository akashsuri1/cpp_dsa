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
            cout<<"Node with memory deleted "<<value<<endl;

        }
};
void print(Node* &tail){
    if(tail==nullptr){
        cout<<"This linkedlist is empty"<<endl;
    }else{
        Node* temp=tail;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=tail);
        cout<<endl;
    }
}
void insertNode(Node* &tail,int element,int value){
    Node* toinsert=new Node(value);
    if(tail==nullptr){
        toinsert->next=toinsert;
        tail=toinsert;
        return;
    }else{
        Node* curr=tail;
        //assumin element exsist in the circular linked list
        while(curr->data!=element){
            curr=curr->next;
        }
        toinsert->next=curr->next;
        curr->next=toinsert;
    }
}
void deleteNode(Node* &tail,int element){
    if(tail==nullptr){
        cout<<"Empty list cannot delete"<<endl;
    }else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=element){
            prev=curr;
            curr=curr->next;
        }
        if(curr==prev){
            tail=nullptr;
            delete curr;
        }else{
            if(curr==tail){
                prev->next=curr->next;
                tail=prev;
                delete curr;
            }else{
                prev->next=curr->next;
                delete curr;
            }
        }
    }
}

int main(){
    Node* tail=nullptr;
    insertNode(tail,0,3);
    print(tail);
    insertNode(tail,3,5);
    insertNode(tail,5,9);
    insertNode(tail,5,10);
    print(tail);
    cout<<"Tail : "<<tail->data<<endl;
    deleteNode(tail,3);
    cout<<"Tail : "<<tail->data<<endl;
    print(tail);
    deleteNode(tail,9);
    deleteNode(tail,5);
    deleteNode(tail,10);
    print(tail);
    insertNode(tail,0,222);
    print(tail);
    return 0;
}