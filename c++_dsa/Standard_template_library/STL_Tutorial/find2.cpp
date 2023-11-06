#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter the element to be found ";
    cin>>x;
    auto it=find(arr,arr+n,x);
    cout<<"The element is found at index "<<it-arr<<endl;
    return 0;    
}