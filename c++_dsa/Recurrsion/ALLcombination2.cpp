#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>& ans,vector<int> ds,int target,int index,vector<int>& orignal){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<orignal.size();i++){
            if(i>index && orignal[i]==orignal[i-1]) continue;
            if(orignal[i]>target) break;
            ds.push_back(orignal[i]);
            solve(ans,ds,target-orignal[i],i+1,orignal);
            ds.pop_back();
        }
} 
int main(){
    vector<vector<int>> ans;
    vector<int> ds;
    int n,target;
    cin>>n;
    vector<int> orignal(n,0);
    for(int i=0;i<n;i++){
        cin>>orignal[i];
    }
    sort(orignal.begin(),orignal.end());
    cout<<"Enter the target : ";
    cin>>target;
    solve(ans,ds,target,0,orignal);
    for(auto vctr:ans){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}