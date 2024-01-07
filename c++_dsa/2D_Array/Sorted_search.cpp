#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> vec){
    cout<<"The 2-d matrix is : "<<endl;
    for(auto vctr:vec){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int col=matrix[0].size();
    int rowindex=0;
    int colindex=col-1;
    while(rowindex<row && colindex>=0){
        int element=matrix[rowindex][colindex];
        if(element==target){
            return true;
        }else if(element<target){
            rowindex++;
        }else{
            colindex--;
        }

    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int target;
    cout<<"The element to search for : ";
    cin>>target;
    if(searchMatrix(vec,target)){
        cout<<"The element is found."<<endl;
    }else{
        cout<<"The element is not found."<<endl;
    }
    return 0;
}