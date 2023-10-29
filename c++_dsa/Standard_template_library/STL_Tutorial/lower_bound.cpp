#include<bits/stdc++.h>
using namespace std;
void print_array(int *arr,int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int n,x;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    print_array(arr,n);
    cout<<"Element to find the lower bound of ";
    cin>>x;
    auto itr=lower_bound(arr,arr+n,x);
    cout<<"The element at lower bound is "<<*itr<<endl;
    cout<<"The index is "<<itr-arr<<endl;
    return 0;
}