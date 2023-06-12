#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the a ";
    cin>>a;
    if(a>0){
        cout<<a<<" is the positive"<<endl;
    }else{
        if(a<0){
            cout<<a<<" is the negative"<<endl;
        }else{
            cout<<"a is zero"<<endl;
        }
    }
    return 0;
}