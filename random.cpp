#include<bits/stdc++.h>
using namespace std;
int pairtion(vector<vector<int>>& arr,int low,int high,int row){
    int pivot=arr[low/row][low%row];
    int left=low;
    int right=high;
    while(left<right){
        while(arr[left/row][left%row]<=pivot && left<high) left++;
        while(arr[right/row][right%row]>pivot && right>low) right--;
        if(left<right){
            swap(arr[left/row][left%row],arr[right/row][right%row]);
        } 
    }
    swap(arr[right/row][right%row],arr[low/row][low%row]);
    return right;
}
void quicksort(vector<vector<int>>& arr,int low,int high,int row){
    if(low<high){
        int pindex=pairtion(arr,low,high,row);
        quicksort(arr,low,pindex-1,row);
        quicksort(arr,pindex+1,high,row);
    }
}
void print(vector<vector<int>> vec){
    for(auto vctr:vec){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    quicksort(vec,0,n*n-1,n);
    print(vec);
    return 0;
}
