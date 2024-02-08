#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>& final,vector<int>& combination,int index,int target,vector<int>& orignal){
    if(index==orignal.size()){
        if(target==0){
            final.push_back(combination);
        }
        return;        
    }
    //take mutltiple times and there is an added check
    if(target>=orignal[index]){
        combination.push_back(orignal[index]);
        solve(final,combination,index,target-orignal[index],orignal);
        combination.pop_back();
    }
    //remove
    solve(final,combination,index+1,target,orignal);
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
    cout<<"Enter the target : ";
    cin>>target;
    solve(ans,ds,0,target,orignal);
    for(auto vctr:ans){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}