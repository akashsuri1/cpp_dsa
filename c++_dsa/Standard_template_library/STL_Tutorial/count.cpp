#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    int x;
    cout<<"The no to count occurence ";
    cin>>x;   
    cout<<count(vec.begin(),vec.end(),x);
    return 0;
}