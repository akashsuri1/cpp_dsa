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
  int count=1;
  int ans=0;
  for(int i=0;i<t;i++){
    if(!isfound(vec,i)){
      count++;
    }else{
      count--;
    }
    ans=max(count,ans);
  }
  cout<<ans<<endl;
  return 0;
}