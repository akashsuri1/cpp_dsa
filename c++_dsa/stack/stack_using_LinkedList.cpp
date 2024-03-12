#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data){
            this->data=data;
            this->next=nullptr;
        
        }
};
class Stack
{
   Node* head;
   int size;

public:
    Stack()
    {
        head=nullptr;
        size=0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return head==nullptr;
    }

    void push(int data)
    {
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
        size++;
    }

    void pop()
    {
        if(head==nullptr){
            cout<<"stack is empty"<<endl;
        }else{
            Node* temp=head;
            head=head->next;
            temp->next=nullptr;
            delete temp;
            size--;
        }

    }

    int getTop()
    {
        if(head==nullptr){
            cout<<"stack is empty"<<endl;
            return -1;
        }else{
            return head->data;
        }
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"The top is : "<<st.getTop()<<endl;
    cout<<"size : "<<st.getSize()<<endl;
    st.pop();
    st.pop();
    cout<<"The top is : "<<st.getTop()<<endl;
    cout<<"size : "<<st.getSize()<<endl;
    st.pop();
    st.pop();
    cout<<"The top is : "<<st.getTop()<<endl;
    cout<<"size : "<<st.getSize()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}