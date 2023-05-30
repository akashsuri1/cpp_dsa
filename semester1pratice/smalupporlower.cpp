#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character please ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"small case"<<endl;
    }else if(ch>='A'&& ch<='Z'){
        cout<<"upper case"<<endl;
    }else if(ch>='0' && ch<='9'){
        cout<<"numeric"<<endl;
    }
    return 0;
}