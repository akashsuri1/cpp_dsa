#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print_vector(vector<int> v){
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
}
int main(){
    int n,x;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"Enter the element to find first instance ";
    cin>>x;
    print_vector(v);
    auto it=find(v.begin(),v.end(),x);
    if(it==v.end()){
        cout<<"The element is not present "<<endl;
    }else{
        cout<<"The element is find at index "<<it-v.begin()<<endl;
    }
    return 0;
}