#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) 
        return true;
    else 
        return false;

}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n,0);
    map<int,int> mpp;
    for(int i=0;i<n;i++){ 
        cin>>ans[i];
        mpp[ans[i]]++;
    }
    cout<<max_element(mpp.begin(),mpp.end(),comp)->first<<endl;
    return 0;
}