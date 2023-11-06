#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v){
    for(auto itr:v) cout<<itr<<" ";
    cout<<endl; 
}
int main(){
    int n,t,x;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    print_vector(vec);
    cout<<"The number of times to find upper bound ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"Enter the element to find upper bound ";
        cin>>x;
        auto itr=upper_bound(vec.begin(),vec.end(),x);
        cout<<"The upper bound is "<<*itr<<endl;
        cout<<"The index is "<<itr-vec.begin()<<endl;
    }
    return 0;
}