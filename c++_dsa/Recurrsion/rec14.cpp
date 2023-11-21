#include<iostream>
using namespace std;
int getsum(int *arr,int size){
    cout<<arr[0]<< " + ";
    if(size==1){
        cout<<endl;
        return arr[0];
    }
    return arr[0]+getsum(arr+1,size-1);
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<getsum(arr,n)<<endl;
    delete []arr;
    return 0;
}