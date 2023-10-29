#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    cout<<"The max element : "<<*max_element(vec.begin(),vec.end())<<endl;
    cout<<"The min element : "<<*min_element(vec.begin(),vec.end())<<endl;
    return 0;
}