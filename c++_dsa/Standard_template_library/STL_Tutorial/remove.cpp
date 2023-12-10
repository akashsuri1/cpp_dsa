#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans={10,20,30,20,20,40,50,60,70,90,10};
    vector<int>::iterator newend=remove(ans.begin(),ans.end(),20);
    for(auto it=ans.begin();it!=newend;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}