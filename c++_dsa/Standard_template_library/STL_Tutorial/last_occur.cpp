#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"Enter the element to find last occurence ";
    cin>>x;
    int ind=upper_bound(v.begin(),v.end(),x)-v.begin();
    ind-=1;
    if(ind>=0 && v[ind]==x){
        cout<<"The element found at "<<ind<<endl;
    }else{
        cout<<"The element does\'t exist"<<endl;
    }
    return 0;
}