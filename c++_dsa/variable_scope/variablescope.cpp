#include<iostream>
using namespace std;
int main(){
    int a=3;
    cout<<a<<endl;
    //this variable has scope inside in this block
    if(true){
        // this is an variable which has scope inside in this in block
        int a=5;
        cout<<a<<endl;
    }
    cout<<a<<endl;
    //we can not acess an local variable outside its block
    cout<<"thank you";
}