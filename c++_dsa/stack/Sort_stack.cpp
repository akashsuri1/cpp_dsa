#include <bits/stdc++.h> 
using namespace std;
void insertsorted(stack<int>& st,int element){
	if(st.empty() || st.top()<element){
		st.push(element);
		return;
	}
	int top=st.top();
	st.pop();
	insertsorted(st,element);
	st.push(top);

}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int top=stack.top();
	stack.pop();
	sortStack(stack);
	insertsorted(stack,top);
}
void print(stack<int> st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();
    print(st);
    cout<<top<<" ";   
}
int main(){
    int element;
    cin>>element;
    stack<int> st;
    for(int i=0;i<element;i++){
        int n;
        cin>>n;
        st.push(n);
    }
    print(st);
    cout<<endl;
    sortStack(st);
    print(st);
    cout<<endl;
    return 0;
}