#include<bits/stdc++.h>
using namespace std;
void print_array(int *arr,int n){
    for(int i=0;i<n;i++) cout<<*(arr+i)<<" ";
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(arr,arr+n);
    int arr2[]={1,2,3,4};
    reverse(arr2,arr2+3);
    print_array(arr,n);
    print_array(arr2,4);
    return 0;
}