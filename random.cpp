#include<bits/stdc++.h>
using namespace std;
void reverse(string& str){
    stack<char> st;
    for(auto itr:str){
        st.push(itr);
    }
    for(auto itr=str.begin();itr!=str.end();itr++){
        *itr=st.top();
        st.pop();
    }
}
int main(){
    string str;
    getline(cin,str);
    reverse(str);
    cout<<str<<endl;
    return 0;
}