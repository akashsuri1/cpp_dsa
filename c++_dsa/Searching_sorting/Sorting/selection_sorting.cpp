#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>& array,int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[minindex]){
                minindex=j;
            }
        }
        swap(array[i],array[minindex]);
    }
}
void print(vector<int>& array,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
int main(){
    int n,temp;
    vector<int> array;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        array.push_back(temp);
    }
    selectionsort(array,n);
    print(array,n);
    return 0;
}