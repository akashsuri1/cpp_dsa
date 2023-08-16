#include<iostream>
#include<limits.h>
using namespace std;
bool is_maximum(int *arr,int n,int m,int mid){
    int cut_length=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            cut_length+=(arr[i]-mid);
        }
        if(cut_length>=m){
            return true;
        }
    }
    if(cut_length>=m){
        return true;
    }
    return false;
}
int Maximum_height(int *arr,int n,int m){
    int start=INT_MAX;
    int end=INT_MIN;
    int ans=-1;
    for(int i=0;i<n;i++){
        start=min(start,arr[i]);
        end=max(end,arr[i]);
    }
    int mid=start+(end-start)/2;
    while(start<=end){
        if(is_maximum(arr,n,m,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Maximum_height(arr,n,m)<<endl;
    return 0;
}