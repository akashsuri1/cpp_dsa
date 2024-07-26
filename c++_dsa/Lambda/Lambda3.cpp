#include<iostream>
using namespace std;
int main(){
    int a=2,b=4;
    void (*ptr)(int&,int&)=[](int& a,int &b)->void{
        cout<<a<<" "<<b<<endl;
        a+=4;
    };
    ptr(a,b);
    cout<<a<<endl;
    return 0;
}