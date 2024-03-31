#include<bits/stdc++.h>
using namespace std;
void modifyQueue(queue<int>& q, int k) {
    stack<int> st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}
void printqueue(queue<int> q){
    if(q.empty()){
        cout<<endl;
        return;
    }
    int front=q.front();
    cout<<front<<" ";
    q.pop();
    printqueue(q);
}
int main(){
    int n,k;
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        q.push(element);
    }
    cout<<"Enter the k to perform the reversal ";
    cin>>k;
    modifyQueue(q,k);
    printqueue(q);
    return 0;
}