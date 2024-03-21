#include<iostream>
using namespace std;
class queue{
    public:
        int* arr;
        int front;
        int rear;
        int size;
    public:
        queue(int size){
            this->size=size;
            arr=new int[size];
            front=rear=-1;
        }
        void push(int element){
            if(front==(rear+1)%size){
                cout<<"queue is full"<<endl;
            }else{
                if(front==-1){
                    front=0;
                }
                rear=(rear+1)%size;
                arr[rear]=element;
            }
        }
        void pop(){
            if(front==-1){
                cout<<"queue is empty"<<endl;
            }else{
                if(front==rear){
                    front=-1;
                    rear=-1;
                }else{
                    front=(front+1)%size;                
                }
            }
        }
        bool empty(){
            if(front==-1){
                return true;
            }else{
                return false;
            }
        }
        void print(){
            if(front==-1){
                cout<<"empty queue"<<endl;
            }else{
                cout<<"queue is : ";
                for(int i=front;i!=rear;i=(i+1)%size){
                    cout<<arr[i]<<" ";
                }
                cout<<arr[rear]<<endl;
            }
        }
        int qfront(){
            if(front==-1){
                cout<<"queue is empty"<<endl;
                return -1;
            }else{
                return arr[front];
            }
        }       
        ~queue(){
            delete []arr;
        }
};
int main(){
    queue qt(5);
    for(int i=0;i<3;i++){
        qt.push(i+1);
    }
    for(int i=0;i<2;i++) qt.pop();
    for(int i=4;i<=7;i++) qt.push(i);
    qt.push(8);
    qt.pop();
    qt.push(8);
    cout<<"queue first element is : "<<qt.qfront()<<endl;
    qt.print();
    int n=5;
    while(n--){
        qt.pop();
    }
    qt.pop();
    return 0;
}