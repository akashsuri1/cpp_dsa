#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Enter the element to look for "<<endl;
    cin>>x;
    if(binary_search(arr,arr+n,x)==true){
        cout<<"Element present in the array"<<endl;
    }else{
        cout<<"Element not present in the array"<<endl;
    }
    return 0;
}