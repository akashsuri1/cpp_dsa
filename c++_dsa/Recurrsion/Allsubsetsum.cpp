#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& num,vector<int>& orignal,int index,int sum){
    cout<<orignal.size()<<endl;
	if(index==orignal.size()){
		num.push_back(sum);
        return;
	}
	//take
	solve(num,orignal,index+1,sum+orignal[index]);
	//not take
	solve(num,orignal,index+1,sum);
}
vector<int> subsetSum(vector<int> &num){
	vector<int> ans;
    cout<<num.size()<<endl;
	solve(ans,num,0,0);
	sort(ans.begin(),ans.end());
	return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> ans=subsetSum(vec);
    for(auto itr:ans){
        cout<<itr<<" ";
    }
    cout<<endl;
    return 0;
}