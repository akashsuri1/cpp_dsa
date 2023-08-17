#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool rotated_searching(vector<int>& arr,int target){
    //!in these case it contains  Duplicate elemnts  
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]==arr[start] && arr[end]==arr[mid]){
            //! thus if start mid and end are equal we just reduce search space as they are obvousily not the answer like 3 3 5 3 3 3 
            start++;
            end--;
            continue;
        }
        if(arr[mid]>=arr[start]){
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
    }
        //$ this has an space complexity of O(logn) beacuase we are perfroming simple binary search only  
        //$ but if there is large number of duplicates like in the case of 3 3 5 3 3 3 then we reduce the search space and we can reduc it up to half the length of the array so worst case o(n/2)   
    return false;
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
    if(rotated_searching(array,target)){
        cout<<"Element present"<<endl;
    }else{
        cout<<"Element not present"<<endl;
    }
    return 0;
}
//* if we want to find the exact position we have to use linear search can't do it with the binary search approach