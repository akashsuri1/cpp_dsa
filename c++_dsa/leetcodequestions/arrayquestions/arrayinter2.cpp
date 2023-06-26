#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
#include<limits.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
}
vector<int> findarray(int arr1[],int arr2[],int n,int m){
     vector<int> ans;
     int i,j;
     i=j=0;
     while(i<n && j<m){
        if(arr1[i]== arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
     }
     return ans;
     //this has less complexity than the previous solution as well as has used an famous approach called the two pointers approach by comparing value in two arrays 
    
}
int main(){
    int t;
    cin>>t;
    int n,m;
    int arr1[100],arr2[100];
    while(t--){
        cin>>n>>m;
        input(arr1,n);
        input(arr2,m);
        vector<int> ans=findarray(arr1,arr2,n,m);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
// we can use an hash map to obtain an better solution