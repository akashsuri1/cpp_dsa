#include <bits/stdc++.h> 
using namespace std;
int findMinimumCost(string str) {
    if(str.size()&1){
      return -1;
    }
    stack<char> st;
    for(auto itr:str){
      if(itr=='{'){
        st.push(itr);
      }else{
        if(st.empty() || st.top()=='}'){
          st.push(itr);
        }else{
          st.pop();
        }
      }
    }
    int open,close;
    open=close=0;
    while(!st.empty()){
      if(st.top()=='{'){
        open++;
      }else{
        close++;
      }
      st.pop();
    }
    return (open+1)/2+(close+1)/2;
}
int main(){
    string str;
    getline(cin,str);
    cout<<"The minimum reversal is "<<findMinimumCost(str)<<endl;
    return 0;
}