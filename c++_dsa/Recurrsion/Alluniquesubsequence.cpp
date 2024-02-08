#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>& ds,vector<int>& ans,vector<int>& orignal,int index){
    ds.push_back(ans);
    for(int i=index;i<orignal.size();i++){
        if(i!=index && orignal[i]==orignal[i-1]) continue;
        ans.push_back(orignal[i]);
        solve(ds,ans,orignal,i+1);
        ans.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<vector<int>> sol;
    vector<int> subset;
    solve(sol,subset,vec,0);
    for(auto vctr:sol){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}