#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
       int n=nums.size();
       vector<int> ans(n);
       stack<int> st;
       for(int i=2*n-1;i>=0 ;i--){
            while(!st.empty() && (st.top()<=nums[i%n])) st.pop();
            if(i<n){
                if(st.empty()){
                    ans[i]=-1;
                }else{
                    ans[i]=st.top();
                }
            }
            st.push(nums[i%n]);
       } 
       return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }    
    vector<int> ans=nextGreaterElements(vec);
    cout<<"The nge's are : ";
    for(auto itr: ans) cout<<itr<<" ";
    cout<<endl;
    return 0;
}