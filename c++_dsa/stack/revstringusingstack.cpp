#include<iostream>
#include<stack>
using namespace std;
void reverse(string& ans){
    stack<char> st;
    for(auto itr:ans){
        st.push(itr);
    }
    int i=0;
    while(!st.empty()){
        ans[i]=st.top();
        st.pop();
        i++;
    }
}
int main(){
    string ans;
    getline(cin,ans);
    reverse(ans);
    cout<<ans<<endl;
    return 0;
}
