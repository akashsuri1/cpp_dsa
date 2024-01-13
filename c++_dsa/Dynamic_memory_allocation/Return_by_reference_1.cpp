#include<iostream>
using namespace std;
int& returnbyref(int& x){
    cout<<"x = "<<x<<" Address "<<&x<<endl;
    return x;
}
int main(){
    int a=10;
    cout<<"a = "<<a<<" Address "<<&a<<endl;
    int& b=returnbyref(a);
    cout<<"b = "<<b<<" Address "<<&b<<endl;
    returnbyref(a)=13;
    cout<<"a = "<<a<<" Address "<<&a<<endl;
    return 0;
}