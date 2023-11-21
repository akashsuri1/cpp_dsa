#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>& temp,int n){
    if(n==1||n==0){
        return;
    }
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(temp[i]>temp[i+1]){
            swap(temp[i],temp[i+1]);
            flag=true;
        }
    }
    if(!flag){
        return;
    }
    bubblesort(temp,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    bubblesort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}