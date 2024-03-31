#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
        stack<int> input,output;
    public:
        void push(int element){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            input.push(element);
            while(!output.empty()){
                input.push(output.top());
                output.pop();
            }
        }
        void pop(){
            if(input.empty()){
                cout<<"empty queue"<<endl;
            }else{
                input.pop();
            }
        }
        int front(){
            if(input.empty()){
                cout<<"empty queue"<<endl;
                return -1;
            }else{
                return input.top();
            }
        }
        int size(){
            return input.size();
        }
        bool empty(){
            return input.empty();
        }
};
int main(){
    queue qt;
    qt.push(1);
    qt.push(2);
    qt.push(3);
    while(!qt.empty()){
        cout<<qt.front()<<" ";
        qt.pop();
    }
    return 0;
}