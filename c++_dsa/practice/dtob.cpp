#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans,i;
    ans=i=0;
    // so this way after right shifting and worjing with each bit we can arrive at our answer
    while(n!=0){
        int bit=n&1;
        ans=bit*pow(10,i)+ans;
        //this is used to find no in reverse flow
        i++;
        n=n>>1;
    }
    cout<<ans;
    return 0;
    //if large no is used this code falls due to integer size excedd it can be tackled by using strings in the future 
}
