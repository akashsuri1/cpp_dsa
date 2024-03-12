#include<iostream>
using namespace std;
class stack{
    private:
        int* arr;
        int top;
        int size;
    public:
        stack(int size){
            this->size=size;
            arr=new int[size];
            top=-1;
        }
        void push(int element){
            if(size-top>1){
                arr[++top]=element;
            }else{
                cout<<"Stack Overflow"<<endl;
            }    
        }
        void pop(){
            if(top>=0){
                top--;
            }else{
                cout<<"Stack empty"<<endl;
            }

        }
        int peek(){
            if(top>=0){
                return arr[top];
            }else{
                return -1;
            }
        }
        bool isempty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<"The stack top : "<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"The stack top : "<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<"The stack top : "<<st.peek()<<endl;
    st.push(10);
    if(st.isempty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}