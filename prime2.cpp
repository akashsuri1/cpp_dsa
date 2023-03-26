#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the value of n"<<endl;
    cin>>n;
    bool isprime=true;
    for(int j=2;j<n;j++){
        if(n%j==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"prime number"<<endl;
    }else{
        cout<<"not a prime number"<<endl;
    }

}