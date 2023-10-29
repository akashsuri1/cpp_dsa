#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v){
    for(auto itr:v) cout<<itr<<" ";
    cout<<endl; 
}
int main(){
    int n,x;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    print_vector(vec);
    for(int i=0;i<5;i++){
        cout<<"The element to find lower bound ";
        cin>>x;
        cout<<"The element at lower bound is "<<*lower_bound(vec.begin(),vec.end(),x)<<endl;
        cout<<"The lower bound occur at index "<<lower_bound(vec.begin(),vec.end(),x)-vec.begin()<<endl;
    }
    return 0;
}
//lower bound return an iterator pointing to first element not less than x