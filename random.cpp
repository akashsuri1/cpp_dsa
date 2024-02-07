#include<bits/stdc++.h>
using namespace std;
void solve(set<vector<int>>& ans,vector<int>& orignal,long long k,long long sum,int index,vector<int>& subset){
    if(sum>k) return;
    if(index==orignal.size()){
        if(sum==k){
            for(auto itr:subset) cout<<itr<<" "
            sort(subset.begin(),subset.end());
            ans.insert(subset);
        }
        return;
    }
    //take
    subset.push_back(orignal[index]);
    sum+=orignal[index];
    solve(ans,orignal,k,sum,index+1,subset);
    //not take
    subset.pop_back();
    sum-=orignal[index];
    solve(ans,orignal,k,sum,index+1,subset);
}
vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
    set<vector<int>> ans;
    vector<int> subset;
    solve(ans,a,k,0,0,subset);
    vector<vector<int>> final(ans.begin(),ans.end());
    return final;
}

int main(){
    vector<int> ans={1 ,2, 3, 1, 1, 1};
    for(auto vctr:subarraysWithSumK(ans,3)){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}
