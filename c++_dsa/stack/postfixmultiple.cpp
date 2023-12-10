#include<iostream>
#include<stack>
using namespace std;
int stackans(string ans){
    stack<int> st;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==' '){
            continue;
        }else if(isdigit(ans[i])){
            int num=0;
            while(isdigit(ans[i]) && i<ans.size()){
                num=num*10+(ans[i]-'0');
                i++;
            }
            st.push(num);
        }else{
            int a1=st.top();
            st.pop();
            int a2=st.top();
            st.pop();
            switch(ans[i]){
                case '+':st.push(a1+a2);
                         break;
                case '-':st.push(a2-a1);
                         break;
                case '*':st.push(a1*a2);
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
    cout<<stackans(str)<<endl;
    return 0;
}