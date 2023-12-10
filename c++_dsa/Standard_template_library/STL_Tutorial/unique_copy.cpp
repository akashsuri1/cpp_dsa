#include<bits/stdc++.h>
using namespace std;
bool isequal(int a,int b){
    return a==b;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> vec2(n);
    auto itr=unique_copy(vec.begin(),vec.end(),vec2.begin(),isequal);
    for(auto it=vec2.begin();it!=itr;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}