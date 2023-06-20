#include<iostream>
using namespace std;
int setbits(int n){
    int ans=0;
    while(n!=0){
        if(n&1){
            ans++;
        }
        n=n>>1;
    }
    return ans;
}
int sumofsetbits(int a,int b){
    return setbits(a)+setbits(b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"the sit bit of a and b is "<<sumofsetbits(a,b)<<endl;
    return 0;
}