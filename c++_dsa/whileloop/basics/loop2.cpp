#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number want the sum you want ";
    cin>>n;
    int sum=0,i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"the sum is this "<<sum<<endl;
    cout<<"the same can be found in 0 complexity by formula "<<(n*(n+1))/2<<endl;
    return 0;
}