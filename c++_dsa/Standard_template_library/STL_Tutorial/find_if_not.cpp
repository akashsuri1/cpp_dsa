#include<bits/stdc++.h>
using namespace std;
bool isodd(int i){
    if(i&1){
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
    vector<int>::iterator itr=find_if_not(vec.begin(),vec.end(),isodd);
    cout<<"the first not odd is "<<*itr<<endl;
    return 0;
}