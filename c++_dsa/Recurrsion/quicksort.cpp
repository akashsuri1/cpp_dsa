#include<iostream>
#include<vector>
using namespace std;
int parition(vector<int>& arr,int low,int high){
    int pivot=arr[low];
    int left=low;
    int right=high;
    while(left<right){
        while(arr[left]<=pivot && left<high) left++;
        while(arr[right]>pivot && right>low) right--;
        if(left<right) swap(arr[left],arr[right]);
    }
    swap(arr[low],arr[right]);
    return right;
}
void quicksort(vector<int>& arr,int low,int high){
    if(low<high){
        int p_index=parition(arr,low,high);
        quicksort(arr,low,p_index-1);
        quicksort(arr,p_index+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    quicksort(vec,0,n-1);
    for(int i=0;i<n;i++) cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}