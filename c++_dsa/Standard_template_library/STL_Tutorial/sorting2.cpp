#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> vec){
    for(int i:vec) cout<<i<<" ";
    cout<<endl;
}
int main(){
    vector<int> vec(5,0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());// n logn  complexity
    vector<int> vec2={1,7,6,2,4};
    sort(vec2.begin()+1,vec2.begin()+4);
    print_vector(vec);
    print_vector(vec2);
    return 0;
}