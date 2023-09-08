#include<iostream>
#include<stack>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    stack<char> ans;
    for(int i=0;i<a.size();i++){
        ans.push(a[i]);
    }
    a.clear();
    while(!ans.empty()){
        a.push_back(ans.top());
        ans.pop();
    }
    a.push_back('\0');
    cout<<a<<endl;
    return 0;
}