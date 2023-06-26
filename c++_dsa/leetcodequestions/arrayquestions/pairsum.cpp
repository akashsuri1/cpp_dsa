#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
vector<vector<int>> pairsum(int arr[],int n,int s){
    vector<vector<int>> ans;
    sort(arr,arr+n);//sort is an predefined function to sort the array
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            // also this is bit of an optimization to not check ahead value if its larger than the sum
            if(arr[i]+arr[j]>s){
                break;
            }
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // so we have just run an loop ahead from i and then just checked if sum of two make equal to the required sum easy approach
    return ans;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the required sum ";
    cin>>sum;
    //this is an way to acces the 2d vector like an 2d array
    vector<vector<int>> ans=pairsum(arr,size,sum);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}