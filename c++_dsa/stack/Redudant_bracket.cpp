#include <bits/stdc++.h> 
using namespace std;
bool isoperator(char ch){
    if(ch=='+' || ch=='*' || ch=='/' || ch=='-'){
        return true;
    }else{
        return false;
    }
}
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(auto itr:s){
        if(itr=='(' || isoperator(itr)){
            st.push(itr);
        }else if(itr==')'){
            bool isredudant=true;
            while(st.top()!='('){
                if(isoperator(st.top())){
                    isredudant=false;
                }
                st.pop();
            }
            if(isredudant){
                return true;
            }
            st.pop();
        }
    }
    return false;

}
int main(){
    string str;
    getline(cin,str);
    if(findRedundantBrackets(str)){
        cout<<"Redudant brackets found."<<endl;
    }else{
        cout<<"No Redudant brackets found."<<endl;
    }
    return 0;
}