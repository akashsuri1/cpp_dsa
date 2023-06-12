#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the character ";
    cin>>a;
    if(a>='a' && a<='z'){
       cout<<"a is smallcase"<<endl;        
    }else if(a>='A' && a<='Z'){
        cout<<"a is uppercase "<<endl;
    }else if(a>='0' && a<='9'){
        cout<<"a is numeric"<<endl;
    }else{
        cout<<"a is special character"<<endl;
    }

}