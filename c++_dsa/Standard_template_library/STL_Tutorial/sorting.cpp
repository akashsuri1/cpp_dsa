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
    sort(arr,arr+n);
    print_array(arr,n);
    int arr2[]={1,6,2,7,4};
    sort(arr2+1,arr2+4);
    print_array(arr2,5);
    return 0;
}