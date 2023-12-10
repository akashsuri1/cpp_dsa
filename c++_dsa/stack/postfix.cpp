#include<iostream>
#include<stack>
using namespace std;
int postfixvalue(string& ans){
    stack<int> st;
    for(int i=0;i<ans.size();i++){
        if(isdigit(ans[i])){
            st.push(ans[i]-'0');
        }
        else if (ans[i]!=' '){
            int a1=st.top();
            st.pop();
            int a2=st.top();
            st.pop();

            switch (ans[i])
            {
            case '+':st.push(a1+a2);
                    break;
            
            case '-':st.push(a2-a1);
                    break;
            case '*':st.push(a2*a1);
                    break;
            case '/':st.push(a2/a1);
                    break;
            }
        }
    }
        return st.top();

}
int main(){
    string str;
    getline(cin,str);
    cout<<postfixvalue(str)<<endl;
    return 0;
}