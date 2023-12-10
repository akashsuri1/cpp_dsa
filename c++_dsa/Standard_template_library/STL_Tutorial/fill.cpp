#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    fill(vec.begin(),vec.begin()+n/2,4);
    fill(vec.begin()+n/2,vec.end(),8);
    for(int i=0;i<n;i++) cout<<vec[i]<<" ";
    cout<<endl;

}