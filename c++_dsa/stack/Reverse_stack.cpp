#include<bits/stdc++.h>
using namespace std;
void bottom(stack<int>& st,int curr){
    if(st.empty()){
        st.push(curr);
        return;
    }
    int top=st.top();
    st.pop();
    bottom(st,curr);
    st.push(top);
}
void print_stack(stack<int> st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();
    print_stack(st);
    cout<<top<<" ";
}
void reverseStack(stack<int> &st) {
    if(st.empty()){
        return;
    }
    int curr=st.top();
    st.pop();
    reverseStack(st);
    bottom(st,curr);
}
int main(){
    int element;
    cin>>element;
    stack<int> st;
    for(int i=0;i<element;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    print_stack(st);
    cout<<endl;
    reverseStack(st);
    print_stack(st);
    cout<<endl;
    return 0;
}