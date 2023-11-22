#include<iostream>
using namespace std;
void print(int *arr,int s ,int e){
    for(int i=s;i<=e;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int mainindex=s;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    for(int i=0;i<len1;i++){
        arr1[i]=arr[mainindex++];
    }
    mainindex=mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=arr[mainindex++];
    }
    int i=0,j=0;
    mainindex=s;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[mainindex++]=arr1[i];
            i++;
        }else{
            arr[mainindex++]=arr2[j];
            j++;
        }
    }
    while(i<len1){
        arr[mainindex++]=arr1[i++];
    }
    while(j<len2){
        arr[mainindex++]=arr2[j++];
    }
}
void mergesort(int *arr,int s,int e){
    if(s==e){
        return;
    }
    int mid=s+(e-s)/2;
    //left part
    mergesort(arr,s,mid);
    //right part
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}