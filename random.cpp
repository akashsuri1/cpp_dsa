#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<bool>>& vis,int x,int y,vector<int> dx,vector<int> dy,vector<vector<char>>& board){
    if(x==board.size()-1 || x==0 || y==0 ||y==board[0].size()-1){
        return false;
    }
    bool ans=true;
    vis[x][y]=true;
    for(int i=0;i<dx.size();i++){
        int newx=x+dx[i];
        int newy=y+dy[i];
        if( board[newx][newy]=='O' && !vis[newx][newy]){
            ans=ans&solve(vis,newx,newy,dx,dy,board);
        }
    }
    if(ans==true){
        board[x][y]='X';
    }
    return ans;

}
void solve(vector<vector<char>>& board) {
    vector<vector<bool>> vis(board.size(),vector<bool>(board[0].size(),false));
    vector<int> dx={1,0,0,-1};
    vector<int> dy={0,1,-1,0};
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]=='O' && vis[i][j])
                solve(vis,i,j,dx,dy,board);
        }
    }
}
void print(vector<vector<char>>& board){
    for(auto itr:board){
        for(auto vctr:itr){
            cout<<vctr<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<char>> board={
        {'O', 'O', 'O', 'O', 'X', 'X'},
        {'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'X', 'O', 'X', 'O', 'O'},
        {'O', 'X', 'O', 'O', 'X', 'O'},
        {'O', 'X', 'O', 'X', 'O', 'O'},
        {'O', 'X', 'O', 'O', 'O', 'O'}
    };
    print(board);
    solve(board);
    cout<<"difference"<<endl;
    print(board);

    
}