#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int>& q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
void reverse_rec(queue<int>& q){
    if(q.empty()){
        return;
    }
    int top=q.front();
    q.pop();
    reverse_rec(q);
    q.push(top);
}
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    vector<int> vec={1,2,3,4,5};
    queue<int> q;
    for(auto itr:vec){
        q.push(itr);
    }
    reverse(q);
    print(q);
    reverse_rec(q);
    print(q);
    return 0;
}