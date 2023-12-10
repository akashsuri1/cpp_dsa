#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> ans(n,0);
   for(int i=0;i<n;i++) cin>>ans[i];
   vector<int> ok(6,0);
   copy_n(ans.begin()+1,4,ok.begin()+1);
   for(auto itr:ok) cout<<itr<<" ";
   cout<<endl;
   return 0; 
}