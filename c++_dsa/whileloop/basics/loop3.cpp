#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n to find sum of first even number ";
    cin>>n;
    int i=2;
    int k=1;
    int sum=0;
    while(k<=n){
        k++;
        sum+=i;
        i+=2;
    }
    cout<<"the final sum is "<<sum<<endl;
    cout<<"the same can be found by this formula "<<n*(n+1)<<endl;
    return 0;
    // so this way loops can solve an lot of problems thus help to achieve 
    //efficent solution without repeating same block of code
}