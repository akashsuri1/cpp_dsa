#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of time of fibanochi you want to print ahead of two ";
    cin>>n;
    int a=0,b=1;
    cout<<"the fibanoch is "<<a<<' '<<b<<' ';
    for(int i=2;i<n;i++){
        int nextterm=a+b;
        cout<<nextterm<<' ';
        a=b;
        b=nextterm;
    }
    return 0;
}