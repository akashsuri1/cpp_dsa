#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    int start=0;
    int end=s.size()-1;
    while(start<end){
        while( start<(s.size()-1) && (iswalnum(s[start])==0)) start++;
        while( end > 0 && (iswalnum(s[end])==0))end--;
        if(start<end){
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }else{
                start++;
                end--;
            }
        }
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    if(isPalindrome(str)){
        cout<<"This is also an palindrome"<<endl;
    }else{
        cout<<"It\'s not an palindrome"<<endl;
    }
    return 0;
}