#include<iostream>
using namespace std;
int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    cout<<"size of arr "<<sizeof(arr)<<endl;
    return sum;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int sum=getSum(arr,6);
    cout<<"Sum : "<<sum<<endl;
    sum=getSum(arr+3,3);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}