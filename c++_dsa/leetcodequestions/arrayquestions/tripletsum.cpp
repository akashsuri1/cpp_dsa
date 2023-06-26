#include<iostream>
using namespace std;
void tripletsum(int arr[],int size){
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size;k++){
                cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<endl;
            }
        }
    }
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    tripletsum(arr,size);
    return 0;
}