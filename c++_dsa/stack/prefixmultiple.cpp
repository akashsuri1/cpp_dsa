#include<iostream>
#include<stack>
using namespace std;
int prefixans(string ans){
    stack<int> st;
    for(int i=ans.size()-1;i>=0;i--){
        if(ans[i]==' '){
            continue;
        }else if(isdigit(ans[i])){
            int j=i;
            while(j>=0 && isdigit(ans[j])) j--;
            j++;
            int num=0;
            for(int k=j;k<=i;k++){
                num=num*10+(ans[k]-'0');
            }
            st.push(num);
            i=--j;

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
    string str;
    getline(cin,str);
    cout<<prefixans(str)<<endl;
    return 0;

}