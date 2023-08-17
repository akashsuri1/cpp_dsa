#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>& rank,int dishes,int size,int mid){
    int dishesCount=0;
    for(int i=0;i<size;i++){
        if(rank[i]>mid){
            break;
        }
        int temp=sqrt(1+((8*mid)/rank[i]));
        int result=(-1+temp)/2;
        dishesCount+=result;
        if(dishesCount>=dishes){
            return true;
        }
    }
    return false;
}
int minimum_time(vector<int>& rank,int dishes){
    int start=0;
    sort(rank.begin(),rank.end());
    int size=rank.size();
    int end=(rank[size-1]*(dishes)*(dishes+1))/2;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(ispossible(rank,dishes,size,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;    
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> solution;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        solution.push_back(temp);
    }
    cout<<minimum_time(solution,m)<<endl;
    return 0;
}
//$ so these are some of the advanced binary search question in which we minimize our search space then find our solution these are very helpful to tackle these type of question which woul have otherwise taken time
