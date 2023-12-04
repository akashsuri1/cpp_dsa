#include<bits/stdc++.h>
using namespace std;
void print(vector<int> temp){
    if(temp.empty()){
        cout<<"{}"<<endl;
        return;
    }
    for(auto itr:temp) cout<<itr<<" ";
    cout<<endl;
}
void allsubsequence(vector<int>& temp,int index,vector<int> original){
    if(index>=original.size()){
        print(temp);
        return;
    }
    //not take
    allsubsequence(temp,index+1,original);
    //take the index
    temp.push_back(original[index]);
    allsubsequence(temp,index+1,original);
    temp.pop_back();


}
int main(){
    int n;
    cin>>n;
    vector<int> original(n,0);
    vector<int> temp;
    for(int i=0;i<n;i++) cin>>original[i];
    allsubsequence(temp,0,original);
    return 0;
}