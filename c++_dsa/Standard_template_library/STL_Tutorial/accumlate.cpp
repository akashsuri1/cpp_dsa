#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++) cin>>array[i];
    int sum=accumulate(array,array+n,0);
    cout<<sum<<endl;
    int sumed=accumulate(array,array+n,10);
    cout<<sumed<<endl;
    return 0;
}