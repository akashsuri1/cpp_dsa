#include<iostream>
using namespace std;
int unique(int arr[],int n){
     int ans=0;
     for(int i=0;i<n;i++){
        ans^=arr[i];
     }
     return ans;
}
int main(){
    int arr[1000];
    int t;
    cin>>t;
    while(t--){
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,size)<<endl;
    }
    return 0;
}