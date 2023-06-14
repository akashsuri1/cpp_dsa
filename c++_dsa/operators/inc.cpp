#include<iostream>
using namespace std;
int main(){
    //post increment
    int a,i=2;
    a=i++;
    cout<<a+(i++)<<endl;
    cout<<"a value is "<<a<<" i value is "<<i<<endl;
    //pre increment
    int k,l=11;
    k=++l;
    cout<<k+(++l)<<endl;
    cout<<"k value is "<<k<<" l value is  "<<l<<endl;
    return 0;

}