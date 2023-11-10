#include<bits/stdc++.h>
using namespace std;
int power(int n){
    if(n==0)
        return 1;
    return 2*power(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"The power of 2 to "<<n<<" is "<<power(n)<<endl;
    return 0;
}