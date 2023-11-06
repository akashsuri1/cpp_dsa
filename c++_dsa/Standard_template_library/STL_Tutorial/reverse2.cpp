#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> vec){
    for(int i:vec) cout<<i<<" ";
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    reverse(v.begin(),v.end());
    vector<int> v2={3,2,1,4};
    reverse(v2.begin(),v2.begin()+3);
    print_vector(v);
    print_vector(v2);
    return 0;
}