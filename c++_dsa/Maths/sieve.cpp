#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
    vector<bool> isprime(n+1,true);
    isprime[1]=isprime[0]=false;
    int cnt=0;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                isprime[j]=false;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    cout<<"The number to find prime no till : ";
    cin>>n;
    int ans=countPrime(n);
    cout<<"The count is : "<<ans<<endl;
    return 0;
}
