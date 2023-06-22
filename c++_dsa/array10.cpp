#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
        /*this inbuilt function replaces this stament that 
        if(maxi>num[i]){
            maxi=num[i];
        }
        */
    }
    return maxi;
}
int getmin(int num[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
        /*this inbuilt function replace this stament 
        if(num[i]<min){
            min=num[i];
        }*/
    }
    return mini;
}
int main(){
    int num[100];
    //better to define an array of constraint size rather than creating an array with variable size it is better done with malloc and calloc
    int size;
    cin>>size;
    //taking input in the array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"the maximum value is "<<getmax(num,size)<<endl;
    cout<<"the minimum value is "<<getmin(num,size)<<endl;
    return 0;
}