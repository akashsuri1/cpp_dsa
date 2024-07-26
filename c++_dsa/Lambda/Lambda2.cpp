#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //this is know as no capture one way to do it is this way we cannot excess the parent function variable implicitly
    // here pass by value is done
    auto fun=[](int a,int b)->void{ cout<<a<<" "<<b<<endl;a+=2;};
    fun(a,b);
    cout<<a<<endl;
    return 0;
}