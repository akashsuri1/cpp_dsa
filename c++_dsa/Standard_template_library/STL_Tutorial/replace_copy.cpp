#include<bits/stdc++.h>
using namespace std;
bool ismultipleof10(int i){
    if(i%10==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> ans(n);
    vector<int>::iterator itr=replace_copy_if(vec.begin(),vec.end(),ans.begin(),ismultipleof10,10);
    for(auto it=ans.begin();it!=itr;it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}