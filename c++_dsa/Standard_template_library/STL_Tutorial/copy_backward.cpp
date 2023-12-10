#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> ans(6,0);
    copy_backward(vec.begin(),vec.begin()+4,ans.end()-1);
    for(auto itr:ans) cout<<itr<<" ";
    cout<<endl;
    return 0;
}