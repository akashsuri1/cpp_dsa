#include<iostream>
using namespace std;
class queue{
    public:
        int* arr;
        int front;
        int rear;
        int size;
    queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int element){
        if(rear==size-1){
            cout<<"queue is full"<<endl;
        }else{
            if(front==-1){
                front=0;
            }
            rear++;
            arr[rear]=element;
        }
    }
    int frontele(){
        if(front==-1){
            return -1;
        }else{
            return arr[front];
        }
    }
    void dequeue(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
        }else{
            if(front==rear){
                front=rear=-1;
            }
            else{
                front++;
            }
        }

    }
    bool isempty(){
        return front==-1;
    }
    bool isfull(){
        return rear==size-1;
    }

};
int main(){ 
    queue qt(5);
    qt.enqueue(1);
    qt.enqueue(2);
    qt.enqueue(3);
    qt.enqueue(4);
    qt.enqueue(5);
    qt.enqueue(6);
    qt.dequeue();
    qt.dequeue();
    qt.dequeue();
    qt.dequeue();
    cout<<"queue front : "<<qt.frontele()<<endl;
    qt.dequeue();
    cout<<qt.isempty()<<endl;
    return 0;

}