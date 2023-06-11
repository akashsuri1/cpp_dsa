#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    if(a>b){
        cout<<"the first no is greater"<<endl;
    }else if(a==b){
        cout<<"the two number are equal"<<endl;
    }else{
        cout<<"the second one is greater"<<endl;
    }
    cout<<"thank you"<<endl;
    return 0;

}