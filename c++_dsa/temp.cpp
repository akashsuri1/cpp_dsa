#include<stack>
#include<iostream>
using namespace std;
int evalutestack(string s){
    stack<int> a;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            continue;
        }
        if(isdigit(s[i])){
            int num=0;
            while(isdigit(s[i])){
                int digit=(s[i]-'0');
                num=num*10+digit;
                i++;
            }
            i--;
            a.push(num);

        }else{
            int ar=a.top();
            a.pop();
            int b=a.top();
            a.pop();
            switch(s[i]){
                case '+':a.push(ar+b);
                         break;
                case '-':a.push(b-ar);
                        break;
                case '/':a.push(b/ar);
                         break;
                case '*':a.push(ar*b);
                         break;

            }
        }
    }
    return a.top();
}
int evaluteprefix(string s){
    int i=s.size()-1;
    stack<int> pie;
    for(;i>=0;i--){
        if(s[i]==' '){
            continue;
        }
        else if(isdigit(s[i])){
            int j=i;
            while(isdigit(s[i]) && i>=0){
                i--;
            }
            i++;
            int num=0;
            for(int k=i;k<=j;k++){
                int digit=s[k]-'0';
                num=(num*10)+digit;
            }
            cout<<num<<endl;
            pie.push(num);
        }else{
            int a=pie.top();
            pie.pop();
            int b=pie.top();
            pie.pop();
            switch(s[i]){
                case '+':pie.push(a+b);
                        break;
                case '-':pie.push(a-b);
                         break;
                case '*':pie.push(a*b);
                         break;
                case '/':pie.push(a/b);
                         break;
            }
        }
    }
    return pie.top();
}
int main(){
    string s="+ 9 * 12 6";
    cout<<evaluteprefix(s)<<endl;
    return 0;

   
}