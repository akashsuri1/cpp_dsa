#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack<long long> ans;
    long long mini;
    MinStack() {
        mini=INT_MAX;
    }
    void push(int val) {
        if(ans.empty()){
            mini=val;
            ans.push(val);
        }else{
            if(val<mini){
                ans.push(2ll*val-mini);
                mini=val;
            }else{
                ans.push(val);

            }
        } 
    }
    
    void pop() {
        if(ans.top()<mini){
            mini=2*mini-ans.top();
        }
        ans.pop();
    }
    
    int top() {
        if(ans.top()<mini){
            return mini;
        }else{
            return ans.top();
        }
    }
    
    int getMin() {
        return mini;
    }
};
int main(){
    MinStack st;
    st.push(2);
    st.push(1);
    cout<<"The Minimum "<<st.getMin()<<endl;
    st.pop();
    cout<<"The Minimum after pop is "<<st.getMin()<<endl;
    return 0;
}