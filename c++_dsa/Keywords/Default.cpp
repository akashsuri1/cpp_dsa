#include<iostream>
using namespace std;
void print(int arr[],int size,int start=0){
    for(int i=start;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    print(arr,5);
    print(arr,5,2);
    return 0;
}