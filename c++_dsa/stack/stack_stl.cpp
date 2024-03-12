#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"The top element is "<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<"The top element is "<<st.top()<<endl;
    if(!st.empty()){
        cout<<"The stack is not empty."<<endl;
    }else{
        cout<<"The stack is empty."<<endl;
    }
    return 0;
}