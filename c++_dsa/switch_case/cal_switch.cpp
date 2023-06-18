#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform "<<endl;
    cin>>op;
    switch(op){
        case '+':cout<<a+b<<endl;
                 break;
        case '-':cout<<a-b<<endl;
                 break;
        case '*':cout<<a*b<<endl;
                 break;
        case '/':cout<<a/b<<endl;
                 break;
        case '%':cout<<a%b<<endl;
                 break;
        default:cout<<"enter an valid operation"<<endl;
    }
    return 0;
    // this is an simple calculator written cleanely with help of switch in an readible format where operator value is comapred to produce results
}