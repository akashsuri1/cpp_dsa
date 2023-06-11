#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter the principal amount ";
    cin>>p;
    cout<<"enter the rate ";
    cin>>r;
    cout<<"enter the time ";
    cin>>t;
    cout<<"the final value is "<<p+(p*r*t)/100<<endl;
    return 0;
}