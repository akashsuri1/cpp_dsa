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
class queue{
    public:
        node* front;
        node* rear;
        int qsize;
    public:    
        queue(){
            front=nullptr;
            rear=nullptr;
            qsize=0;
        }
        void push(int element){
            node* newnode=new node(element);
            if(front==nullptr){
                front=rear=newnode;
            }else{ 
                rear->next=newnode;
                rear=rear->next;
            }
            qsize++;
        }
        void pop(){
            if(front==nullptr){
                cout<<"queue is empty"<<endl;
            }else{
                node* temp=front;
                front=front->next;
                temp->next=nullptr;
                delete temp;
                if(front==nullptr){
                    rear=nullptr;
                }
                qsize--;
            }
        }
        int peek(){
            if(front==nullptr){
                cout<<"queue is empty"<<endl;
                return -1;
            }else{
                return front->data;
            }
        }
        int size(){
            return qsize;
        }
        bool empty(){
            if(front==nullptr){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
    queue qt;
    qt.push(1);
    qt.push(2);
    qt.push(3);
    cout<<"The first element is "<<qt.peek()<<endl;
    cout<<"The size is "<<qt.size()<<endl;
    qt.pop();
    qt.pop();
    cout<<"The first element is "<<qt.peek()<<endl;
    cout<<"The size is "<<qt.size()<<endl;
    qt.pop();
    if(qt.empty()){
        cout<<"queue is empty with size "<<qt.size()<<endl;
    }
    return 0;
}