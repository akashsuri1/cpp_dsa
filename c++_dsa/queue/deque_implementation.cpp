#include<iostream>
using namespace std;
class deque{
    public:
        int* arr;
        int front;
        int rear;
        int size;
        deque(int size){
            this->size=size;
            arr=new int[size];
            front=-1;
            rear=-1;
        }
        bool empty(){
            if(front==-1){
                return true;
            }else{
                return false;
            }
        }
        bool isfull(){
            if(front==(rear+1)%size){
                return true;
            }else{
                return false;
            }
        }
        void pushfront(int element){
            if(front==(rear+1)%size){
                cout<<"queue is full"<<endl;
                return;
            }else{ 
                if(front==-1){
                    front=0;
                    rear=0;
                }else if(front==0){
                    front=size-1;
                }else{
                    front=front-1;
                }
                arr[front]=element;
            }
        }
        void pushrear(int element){
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
        void popfront(){
            if(front==-1){
                cout<<"queue is empty"<<endl;
            }else{
                if(front==rear){
                    front=rear=-1;
                }else{
                    front=(front+1)%size;
                }
            }
        }
        void poprear(){
            if(front==-1){
                cout<<"queue is full"<<endl;
            }else{
                if(front==rear){
                    front=-1;
                    rear=-1;
                }else if(rear==0){
                    rear=size-1;
                }else{
                    rear=rear-1;
                }
            }


        } 
        int qfront(){
            if(front==-1){
                return -1;
            }else{
                return arr[front];
            }
        }
        int qrear(){
            if(front==-1){
                return -1;
            }else{
                return arr[rear];
            }
        }
        void print(){
            if(front==-1){
                cout<<"queue is empty"<<endl;
            }else{
                for(int i=front;i!=rear;i=(i+1)%size){
                    cout<<arr[i]<<" ";
                }
                cout<<arr[rear]<<endl;
            }
        }
};
int main(){
    deque dt(5);
    dt.pushfront(1);
    dt.pushrear(2);
    dt.pushrear(3);
    dt.poprear();
    dt.pushfront(4);
    dt.print();
    return 0;
}