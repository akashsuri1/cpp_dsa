#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"The element to search for ";
    cin>>x;
    int ind=lower_bound(arr,arr+n,x)-arr;
    if(ind!=n && arr[ind]==x){
        cout<<"The element occur at "<<ind<<endl;
    }else{
        cout<<"The element does\'t exsist "<<endl;
    }
    return 0;    
}