#include <bits/stdc++.h> 
using namespace std;
void solve(stack<int>& st,int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int top=st.top();
    st.pop();
    solve(st,element);
    st.push(top);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
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
int main(){
    stack<int> st;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int element;
        cin>>element;
        st.push(element);
    }
    print_stack(st);
    cout<<endl;
    int element;
    cout<<"Enter element to insert at bottom in stack : ";
    cin>>element;
    pushAtBottom(st,element);
    print_stack(st);
    cout<<endl;
    return 0;
}