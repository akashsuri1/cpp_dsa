#include<bits/stdc++.h>
using namespace std;
bool isodd(int n){
    if(n&1){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    int cnt=count_if(vec.begin(),vec.end(),isodd);
    cout<<cnt<<endl;
    return 0;
}