#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int sum=accumulate(vec.begin(),vec.end(),0);
    cout<<sum<<endl;
    return 0;
}