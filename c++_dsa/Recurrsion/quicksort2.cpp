#include<iostream>
#include<vector>
using namespace std;
int parition(vector<int>& arr,int low,int high){
    int pivot=arr[low];
    int k=high;
    for(int i=high;i>low;i--){
        if(arr[i]>pivot){
            swap(arr[i],arr[k]);
            k--;
        } 
    }
    swap(arr[k],arr[low]);
    return k;
}
void quicksort(vector<int>& arr,int low,int high){
    if(low<high){
        int pivotindex=parition(arr,low,high);
        quicksort(arr,low,pivotindex-1);
        quicksort(arr,pivotindex+1,high);
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
