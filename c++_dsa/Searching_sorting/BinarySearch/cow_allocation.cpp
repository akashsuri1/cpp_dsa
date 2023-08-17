#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>& stalls,int k,int size,int mid){
    int cowcount=1;
    int current=stalls[0];
    for(int i=1;i<size;i++){
        if(stalls[i]-current>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            current=stalls[i];
        }
    }
    return false;
}
int cow_allocation(vector<int>& stalls,int k){
    int start=0;
    int size=stalls.size();
    sort(stalls.begin(),stalls.end());
    int end=stalls[size-1];
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(ispossible(stalls,k,size,mid)){
            start=mid+1;
            ans=mid;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cout<<cow_allocation(v,k)<<endl;
    return 0;
}