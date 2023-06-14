#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no to find the sum and product of the digits ";
    cin>>n;
    int sum=0,prd=1,digit;
    while(n>0){
        digit=n%10;
        sum+=digit;
        prd*=digit;
        n/=10;
    }
    cout<<"the sum is "<<sum<<" the product is "<<prd<<endl;
    cout<<prd-sum<<endl;
    return 0;
}