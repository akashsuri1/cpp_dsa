#include <bits/stdc++.h> 
using namespace std;
class TwoStack {
    int* arr;
    int top1;
    int top2;
    int size;

public:

    TwoStack(int s) {
        size=s;
        top1=-1;
        top2=s;
        arr=new int[size];
    }
    
    void push1(int num) {
        if(top1+1!=top2){
            arr[++top1]=num;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void push2(int num) {
        if(top2-1!=top1){
            arr[--top2]=num;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }

    int pop1() {
        if(top1!=-1){
            return arr[top1--];
        }else{
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }
    int pop2(){
        if(top2!=size){
            return arr[top2++];
        }else{
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }
};
int main(){
    TwoStack st(5);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push2(4);
    st.push2(5);
    st.push1(4);
    st.push2(6);
    cout<<st.pop1()<<endl;    
    cout<<st.pop1()<<endl;    
    cout<<st.pop1()<<endl;    
    cout<<st.pop2()<<endl;    
    cout<<st.pop2()<<endl;
    st.pop1();
    st.pop2();    
    return 0;
    //one stack while insert from left to right the other one insert from right to left maximizing the space utilization
}