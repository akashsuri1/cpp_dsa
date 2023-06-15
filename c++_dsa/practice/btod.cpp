#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0,i=0;
    while(n != 0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<ans<<endl;
    return 0;
}
//so this way after extracting each digit we can achieve our answer by applying and adding pow of two with one bit 
