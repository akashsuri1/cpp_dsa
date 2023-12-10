#include<bits/stdc++.h>
using namespace std;
bool issameeven(int i,int j){
    if((i%2==0) && (j%2==0)){
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
    vector<int>::iterator itr=unique(vec.begin(),vec.end(),issameeven);
    for(auto it=vec.begin();it!=itr;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}