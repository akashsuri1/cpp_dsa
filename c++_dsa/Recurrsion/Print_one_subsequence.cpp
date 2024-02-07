#include<bits/stdc++.h>
using namespace std;
bool Onesubsequence(vector<vector<int>>& ds,vector<int>& subset,vector<int> orignal,int index,int sum,int required){
    if(index==orignal.size()){
        if(sum==required){
            ds.push_back(subset);
            return true;
        }
        return false;
    }
    //take
    sum+=orignal[index];
    subset.push_back(orignal[index]);
    if(Onesubsequence(ds,subset,orignal,index+1,sum,required)==true){
        return true;
    }
    sum-=orignal[index];
    subset.pop_back();
    if(Onesubsequence(ds,subset,orignal,index+1,sum,required)==true){
        return true;
    }
    return false;

}
int main(){
    int n,required;
    cin>>n;
    vector<int> orignal(n,0);
    for(int i=0;i<n;i++){
        cin>>orignal[i];
    } 
    cout<<"Enter the Required sum : ";
    cin>>required;
    vector<int> subset;
    vector<vector<int>> ans;
    Onesubsequence(ans,subset,orignal,0,0,required);
    for(auto vctr:ans){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;

}
