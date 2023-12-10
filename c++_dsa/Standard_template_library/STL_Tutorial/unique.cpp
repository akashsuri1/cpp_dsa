#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int>::iterator it=unique(vec.begin(),vec.end());
    for(auto itr=vec.begin();itr!=it;itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}