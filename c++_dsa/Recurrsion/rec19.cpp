#include<iostream>
using namespace std;
bool isplaindrome(string& str,int i){
    if(i>str.size()-1-i){
        return true;
    }
    if(str[i]!=str[str.size()-1-i]){
        return false;
    }else{
        return isplaindrome(str,++i);
    }
}
int main(){
    string str;
    getline(cin,str);
    if(isplaindrome(str,0)){
        cout<<"yippy its an palindrome"<<endl;
    }else{
        cout<<"its not an palindrome "<<endl;
    }
    return 0;
}