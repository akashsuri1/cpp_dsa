#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    unordered_map<char,char> mpp={{')','('},{'}','{'},{']','['}};
    stack<char> st;
    for(int i=0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='['||s[i]=='{' ){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }
                if(mpp[s[i]]!=st.top()){
                    return false;
                }else{
                    st.pop();
                }

            }
    }
        return st.empty();
}
int main(){
    string exp;
    getline(cin,exp);
    if(isValid(exp)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not balanced"<<endl;
    }
    return 0;
} 