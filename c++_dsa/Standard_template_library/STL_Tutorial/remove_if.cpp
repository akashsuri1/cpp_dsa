#include<bits/stdc++.h>
using namespace std;
bool isodd(int n){
    if(n&1){
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
    auto pend=remove_if(vec.begin(),vec.end(),isodd);
    for(auto itr=vec.begin();itr!=pend;itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}