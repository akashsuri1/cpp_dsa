#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
        stack<int> input,output;
    public:
        void push(int element){
            input.push(element);
        }
        void pop(){
            if(output.empty()){
               while(!input.empty()){
                    output.push(input.top());
                    input.pop();
               } 
            }
            if(output.empty()){
                    cout<<"Empty queue"<<endl;
            }else{
                    output.pop();
            }
        }
        int front(){
            if(output.empty()){
                while(!input.empty()){
                    output.push(input.top());
                    input.pop();
                }
            }
            if(output.empty()){
                    cout<<"Empty queue"<<endl;
                    return -1;
            }else{
                return output.top();
            }

        }
        int size(){
            return input.size()+output.size();
        }
        bool empty(){
            if(this->size()==0){
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
    while(!qt.empty()){
        cout<<qt.front()<<" ";
        qt.pop();
    }
    cout<<endl;
    return 0;
}