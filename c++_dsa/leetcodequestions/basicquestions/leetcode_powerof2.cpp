#include<iostream>
#include<limits.h>
using namespace std;
bool isPowerOfTwo(int n) {
       int ans=1; 
       for(int i=0;i<=30;i++){
    
           if(ans==n){
               return true;
           }
             if(ans<INT_MAX/2){
             ans=ans*2;
             }
           
       }
       return false;
       // this is an optimized solution as using the value of ans repeated no of times
}
int main(){
    int n;
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}