#include<bits/stdc++.h>
using namespace std;
bool comp(int n1,int n2){
    if(n1>=n2){
        return true;
    }
    return false;
}
int main(){
    vector<int> array={1,2,3,4,5};
    sort(array.begin(),array.end(),comp);
    for(auto itr:array) cout<<itr<<" ";
    cout<<endl;
    return 0;
}