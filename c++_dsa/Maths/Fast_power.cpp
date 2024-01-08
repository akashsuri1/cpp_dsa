#include<iostream>
using namespace std;
int power(int x,int n){
    int res=1;
    while(n!=0){
        if(n&1){
            res=res*x;
        }
        x=x*x;
        n=n>>1;
    }
    return res;
}
int main(){
    int n,x;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>x;
    int ans=power(n,x);
    cout<<"The answer is : "<<ans<<endl;
    return 0;
}