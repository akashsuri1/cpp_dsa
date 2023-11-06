#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"Enter the element to find occurence ";
    cin>>x;
    int freq=upper_bound(v.begin(),v.end(),x)-lower_bound(v.begin(),v.end(),x);
    cout<<"The occurence are "<<freq<<endl;
    return 0;
}
//o(2logn)
