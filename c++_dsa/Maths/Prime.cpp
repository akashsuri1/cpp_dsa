#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number to check prime : ";
    cin>>n;
    if(isPrime(n)){
        cout<<"Yes it\'s an prime"<<endl;
    }else{
        cout<<"No it\'s not prime"<<endl; 
    }
    return 0;
}