#include<iostream>
#include<stack>
using namespace std;
int prefix(string ans){
    stack<int> st;
    for(int i=ans.size()-1;i>=0;i--){
        if(isdigit(ans[i])){
            st.push(ans[i]-'0');
        }else if(ans[i]==' '){
            continue;
        }else{
            int a1=st.top();
            st.pop();
            int a2=st.top();
            st.pop();
            switch(ans[i]){
                case '+':st.push(a1+a2);
                         break;
                case '-':st.push(a1-a2);
                         break;
                case '*':st.push(a1*a2);
                         break;
                case '/':st.push(a1/a2);
                        break;
            }

        }
    }
    return st.top();
}
int main(){
    string exp;
    getline(cin,exp);
    cout<<prefix(exp)<<endl;
    return 0;
}