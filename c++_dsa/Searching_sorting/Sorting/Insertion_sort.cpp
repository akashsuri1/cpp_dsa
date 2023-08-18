#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>& array,int n){
    for(int i=1;i<n;i++){
        int key=array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}
void print_array(vector<int>& array,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;
}
int main(){
    int n,temp;
    cin>>n;
    vector<int> array;
    for(int i=0;i<n;i++){
        cin>>temp;
        array.push_back(temp);
    }
    insertion_sort(array,n);
    print_array(array,n);
    return 0;
}
//$ it has an best case complexity of O(n) while in worst case it has an complexity of O(n^2) 
                        