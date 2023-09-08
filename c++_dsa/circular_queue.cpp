#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class circular_queue{
    private:
       int *queue;
       int front;
       int rear;
       int size;
    public:
        circular_queue(int n){
            queue=new int[n];
            front=rear=-1;
            size=n;
        }
        bool isfull(){
            if(front==0 && rear==size-1){
                return true;
            }else if(rear+1==front){
                return true;
            }
            return false;
        }
        bool isempty(){
            if(front==-1){
                return true;
            }
            return false;
        }
        void eneque(int number){
            if(this->isfull()){
                cout<<"queue is full"<<endl;
            }else if(front==-1){
                front++;
                rear=(rear+1)%size;
                queue[rear]=number;

            }else{
                rear=(rear+1)%size;
                queue[rear]=number;
            }
        }
        int deque(){
            if(this->isempty()){
                cout<<"queue is empty"<<endl;
                return -1;
            }else{
                int temp=queue[front];
                if(front==rear){
                    front=rear=-1;
                }else{
                    front=(front+1)%size;
                }
                return temp;
            }
        }
        void display(){
            cout<<"queue is : ";
            if(this->isempty()){
                cout<<"is empty"<<endl;
                return;
            }
            for(int i=front;i!=rear;i=(1+i)%size){
                cout<<queue[i]<<" ";
            }
            cout<<queue[rear];
            cout<<endl;
        }
        ~circular_queue(){
           delete []queue;
        }
};
int main(){
    circular_queue q1(5);
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        q1.eneque(temp);

    }
    for(int i=0;i<3;i++){
        q1.deque();
    }
    q1.eneque(50);
    q1.eneque(60);
    q1.eneque(70);
    q1.display();

}
