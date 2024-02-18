#include<bits/stdc++.h>
using namespace std;
void solve(int col,vector<vector<string>>& allperm,vector<string>& board,int n,vector<int>& row,vector<int>& down_dig,
vector<int>& up_dig){
    if(col==n){
        allperm.push_back(board);
        return;
    }
    for(int irow=0;irow<n;irow++){
        if(row[irow]==0 && down_dig[irow+col]==0 && up_dig[n-1+col-irow]==0){
            row[irow]=1;
            down_dig[irow+col]=1; 
            up_dig[n-1+col-irow]=1;
            board[irow][col]='Q';
            solve(col+1,allperm,board,n,row,down_dig,up_dig);
            row[irow]=0;
            down_dig[irow+col]=0; 
            up_dig[n-1+col-irow]=0;
            board[irow][col]='.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> allperm;
    vector<string> board(n,string(n,'.'));
    vector<int> row(n,0);
    vector<int> down_dig(2*n-1,0);
    vector<int> up_dig(2*n-1,0);
    solve(0,allperm,board,n,row,down_dig,up_dig);
    return allperm;
}
int main(){
    int n;
    cout<<"Enter the size of Cheesboard : ";
    cin>>n;
    vector<vector<string>> ans=solveNQueens(n);
    for(auto v2d:ans){
        cout<<"--Combination--"<<endl;
        for(auto vctr:v2d){
            for(auto itr:vctr){
                cout<<itr<<" ";
            }
            cout<<endl;

        }
        cout<<"---------------"<<endl;
    }
    return 0;
}