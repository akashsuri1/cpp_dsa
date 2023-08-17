#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rotated_searching(vector<int>& arr,int target){
    //!in these case it contains no Duplicate elemnts thus 
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>arr[start]){
            if(arr[start]<=target && target<arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }

        }else{
            if(arr[mid]<target && target<=arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        mid=start+(end-start)/2;
        //$ this has an space complexity of O(logn) beacuase we are perfroming simple binary search only  
    }
    return -1;
} 
int main(){
    int n;
    cin>>n;
    vector<int> array;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        array.push_back(temp);
    }
    int target;
    cout<<"Enter the target";
    cin>>target;
    cout<<rotated_searching(array,target)<<endl;
    return 0;
}