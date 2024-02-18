#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &m,vector<string>& ans,vector<vector<int>>& vis,string& move,int x, int y,int n,vector<int> di,vector<int> dj){
    if(x==n-1 && y==n-1){
        ans.push_back(move);
    }
    string dir="DLRU";
    for(int ind=0;ind<4;ind++){
        int nextx=x+di[ind];
        int nexty=y+dj[ind];
        if(nextx>=0 && nexty>=0 && nextx<n && nexty<n && !vis[nextx][nexty] && m[nextx][nexty]==1){
            vis[x][y]=1;
            move.push_back(dir[ind]);
            solve(m,ans,vis,move,nextx,nexty,n,di,dj);
            move.pop_back();
            vis[x][y]=0;
        }
    }
}
vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;
    vector<vector<int>> vis(n,vector<int> (n,0));
    vector<int> di={1,0,0,-1};
    vector<int> dj={0,-1,1,0};
    string move="";
    if(m[0][0]==1){
        solve(m,ans,vis,move,0,0,n,di,dj);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> m(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    vector<string> ans=findPath(m,n);
    cout<<"The path are : "<<endl;
    for(auto str:ans){
        cout<<str<<endl;
    }
    return 0;
}