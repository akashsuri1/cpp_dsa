#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0)
     return;
    //non head recurrsion
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
    cout<<endl;
    cin>>n;
    print(n);
    cout<<endl;
    return 0;
}