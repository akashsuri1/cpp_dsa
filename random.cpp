#include<bits/stdc++.h>
using namespace std;
bool isfound(vector<int> t,int index){
  for(int i=index-1;i>=0;i--){
    if(t[i]==t[index]){
      return true;

    }
   }
    return false;
}
int main(){
  int t;
  cin>>t;
  vector<int> vec(t,0);
  for(int i=0;i<t;i++) cin>>vec[i];
  set<int> ans;
  int maxed=0;
  for(int i=0;i<t;i++){
    if(ans.find(vec[i])!=ans.end()){
      ans.erase(vec[i]);
    }else{
      ans.insert(vec[i]);
    }
    int temp=ans.size();
    maxed=max(maxed,temp);
  }
  cout<<maxed<<endl;
  return 0;
}