#include<iostream>
#include<stack>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'|| c=='/'){
        return 2;
    }
    else if(c=='-' || c=='+'){
        return 1;
    }
    else{
        return -1;
    }
}
string postconversion(string ans){
    string result="";
    stack<char> st;
    for(int i=0;i<ans.size();i++){
        if(iswalnum(ans[i])){
            result+=ans[i];
        }else if(ans[i]=='(' ){
            st.push(ans[i]);
        }else if(ans[i]==')'){
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }else if(ans[i]==' '){
                continue;
        }else{
            while((!st.empty()) && (prec(ans[i])<=prec(st.top()))){
                result+=st.top();
                st.pop();
            }
            st.push(ans[i]);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
}
int main(){
    string exp;
    getline(cin,exp);
    cout<<exp<<endl;
    string ans=postconversion(exp);
    cout<<ans<<endl;
    return 0;
}