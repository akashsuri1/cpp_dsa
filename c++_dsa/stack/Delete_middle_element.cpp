#include <bits/stdc++.h>
using namespace std;
void solve(stack<int>& st,int count,int size){
   if(count==size/2){
      st.pop();
      return;
   }
   int top=st.top();
   st.pop();
   solve(st,count+1,size);
   st.push(top);

} 
void deleteMiddle(stack<int>&inputStack, int N){
	solve(inputStack,0,N);
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        st.push(element);
    }
    print_stack(st);
    cout<<endl;
    deleteMiddle(st,n);
    print_stack(st);
    cout<<endl;
    return 0;
}