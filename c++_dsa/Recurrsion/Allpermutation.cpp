#include<bits/stdc++.h>
using namespace std;
void recurpermute(vector<vector<int>>& ans,vector<int>& ds,vector<bool>& freq,vector<int> nums){
       if(ds.size()==nums.size()){
           ans.push_back(ds);
           return;
       }
       for(int i=0;i<nums.size();i++){
           if(!freq[i]){
               freq[i]=true;
               ds.push_back(nums[i]);
               //recurrsion
               recurpermute(ans,ds,freq,nums);
               //backtrack
               ds.pop_back();
               freq[i]=false;
           }
       }

   }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> freq(nums.size(),false);
        recurpermute(ans,ds,freq,nums);
        return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<vector<int>> ans=permute(vec);
    for(auto itr:ans){
        for(auto it:itr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}