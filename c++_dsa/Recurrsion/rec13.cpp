#include<iostream>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
bool checksorted(int *arr,int n){
    print(arr,n);
    if(n<=1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }else{
        return true&&checksorted(arr+1,n-1);
    }
}
int main(){
     int n;
     cin>>n;
     int *arr=new int[n];
     for(int i=0;i<n;i++) cin>>arr[i];
     if(checksorted(arr+1,n-1)){
        cout<<"array sorted"<<endl;
     }else{
        cout<<"array not sorted "<<endl;
     }
     return 0;
}