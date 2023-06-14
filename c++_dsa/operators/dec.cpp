#include<iostream>
using namespace std;
int main(){
    //post decrement 
    int a,i=3;
    a=i--;
    cout<<a+(i--)<<endl;
    cout<<"the value of a is "<<a<<" the value of i is "<<i<<endl;
    //pre decrement 
    int k,l=5;
    k=--l;
    cout<<k+(--l)<<endl;
    cout<<"the value of k is "<<k<<"the value of l is "<<l<<endl;
    return 0; 
}