#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(num>0){
        cout<<num<<" is the positive number"<<endl;
    }else if(num==0){
        cout<<num<<" is zero"<<endl;
    }else{
        cout<<num<<" is negative"<<endl;
    }
    return 0;
}