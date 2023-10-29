#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    cout<<"Enter the element to look for in the vector ";
    cin>>x;
    if(binary_search(v.begin(),v.end(),x)==true){
        cout<<"Element present in the vector"<<endl;
    }else{
        cout<<"Element not present in the vector"<<endl;
    }
    return 0;
}