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
    vector<int> ans(6,0);
    //copy if condition is true
    copy_if(vec.begin(),vec.end(),ans.begin()+1,iseven);
    for(auto itr:ans) cout<<itr<<" ";
    cout<<endl;
    return 0;
}