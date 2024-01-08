#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter the no\'s to find gcd : ";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"The gcd is : "<<ans<<endl;
    return 0;
}