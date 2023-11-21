#include<iostream>
using namespace std;
void reverse(string &str,int i){
    if(i>str.size()-i-1)
        return;
    swap(str[i],str[str.size()-1-i]);
    reverse(str,++i);
}
int main(){
    string str;
    getline(cin,str);
    reverse(str,0);
    cout<<str;
    return 0;
}