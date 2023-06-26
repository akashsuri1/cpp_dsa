#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans=0;
    // xor all elements
    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }
    //xor with 1 to n -1 cancel all the elements that apper once and find one that is duplicated
    for(int i=1 ; i<n ; i++){
        ans ^= i;
    }
    return ans;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<duplicate(arr,size)<<endl;
    return 0;
}
//vector is an dynamic array which can increase it's size when needed
//another way is we can use hash map and print that number with count 2
//also we can subtract sum of n from sum of array an that number will be printed 