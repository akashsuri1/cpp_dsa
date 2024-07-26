#include<iostream>
using namespace std;
int main(){
    int a=4,b=3;
    int c=6,d=9;
    auto cmp=[a,b,&c]()->void{
        cout<<a<<" "<<b<<" "<<c<<endl;
        c+=2;
        // here we cannot update value of a and b
    };
    // it just capture the value starting value of a and b then no change
    auto cmp2=[&a,&b]()->void{
        cout<<a<<" "<<b<<endl;
        a=a+4;
    };
    cmp();
    cmp2();
    cout<<a<<" "<<b<<" "<<c<<endl;
    cmp();
    cmp2();
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}