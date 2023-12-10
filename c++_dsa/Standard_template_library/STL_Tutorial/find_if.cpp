#include<bits/stdc++.h>
using namespace std;
bool isodd(int t){
    if(t&1){
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
    auto itr=find_if(vec.begin(),vec.end(),isodd);
    cout<<"first odd element is "<<*itr<<endl;
    return 0;
}