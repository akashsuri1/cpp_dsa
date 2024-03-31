#include<bits/stdc++.h>
using namespace std;
vector<int> first_negative(vector<int>& arr,int k){
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        if(arr[i]<0) 
            q.push(i);
    }
    if(q.empty()){
        ans.push_back(0);
    }else{
        ans.push_back(arr[q.front()]);
    }
    for(int i=k;i<arr.size();i++){
        //removal
        if(!q.empty() && q.front()==i-k){
            q.pop();
        }
        //addition
        if(arr[i]<0){
            q.push(i);
        }
        if(q.empty()){
            ans.push_back(0);
        }else{
            ans.push_back(arr[q.front()]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"Enter k : ";
    cin>>k;
    vector<int> ans=first_negative(arr,k);
    for(auto itr:ans){
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}