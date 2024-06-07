#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int start,vector<vector<int>>& adj,vector<bool>& vis){
    queue<int> q;
    q.push(start);
    vis[start]=true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<"curr element"<<curr<<" "<<"uska bacha"<<" ";
        for(int i=0;i<adj.size();i++){
            cout<<adj[curr][i]<<" ";
            if(adj[curr][i] && i!=curr){
                if(!vis[i]){
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        cout<<endl;
    }
    cout<<"khatam"<<endl;
}
int findCircleNum(vector<vector<int>>& isConnected) {
    int vertex=isConnected.size();
    vector<bool> vis(vertex,false);
    int province=0;
    for(int i=0;i<vertex;i++){
        cout<<"vertex"<<i<<"visited"<<vis[i]<<" "<<endl;
        if(!vis[i]){
            // cout<<i<<endl;
            province++;
            bfs(i,isConnected,vis);
        }
    }
    return province;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    cout<<findCircleNum(adj);
    return 0;   
}