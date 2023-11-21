#include<iostream>
using namespace std;
bool linear_search(int *arr,int n,int key){
      if(n==0){
        return false;
      }
      if(arr[0]==key)
        return true;
      return false|linear_search(arr+1,n-1,key);
}
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cin>>key;
    if(linear_search(arr,n,key)){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found "<<endl;
    }
    delete []arr;
}