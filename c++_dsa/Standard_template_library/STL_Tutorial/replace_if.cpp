#include<bits/stdc++.h>
using namespace std;
bool iseven(int i){
    if(i&1){
        return false;
    }else{
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    replace_if(vec.begin(),vec.end(),iseven,1);
    for(auto itr:vec) cout<<itr<<" ";
    cout<<endl;
    return 0;
}