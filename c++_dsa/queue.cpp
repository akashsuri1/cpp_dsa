#include<iostream>
using namespace std;
class queue{
    private:
        int arr[30];
        int rear;
        int front;
        int size=30;
    public:
        queue(){
            front=-1;
            rear=-1;
        }
        bool isfull(){
            if(front==0 && rear==size-1){
                return true;
            }else{
                return false;
            }
        }
        bool isempty(){
            if(front==-1){
                return true;
            }else{
                return false;
            }
        }
        void eneque(int n){
            if(this->isfull()){
                cout<<"queue is full"<<endl;
            }else{
                if(front==-1){
                    front++;
                }
                arr[++rear]=n;
            }
        }
        void deque(int n){
            if(this->isempty()){
                cout<<"queue is empty"<<endl;
            }
            int temp=arr[front];
            if(front>=rear){
                front=rear=-1;
            }else{
                front++;
            }
        }
        void display(){
            if(this->isempty()){
               cout<<"queue is empty"<<endl;
            }else{
                for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
        int front(){
            if(this->isempty()){
                return -1;
            }else{
                return arr[front];
            }
        }
        int back(){
            if(this->isempty()){
                return -1;
            }else{
                return arr[rear];
            }
        }
}