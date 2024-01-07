#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> vec){
    cout<<"It\'s an 2d-vector : "<<endl;
    for(auto vctr:vec){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int total=row*col;
    int count=0;
    int rowstart=0;
    int rowend=row-1;
    int colstart=0;
    int colend=col-1;
    while(count<total){
        for(int i=colstart; i<=colend && count<total;i++){
            ans.push_back(matrix[rowstart][i]);
            count++;
        }
        rowstart++;
        for(int i=rowstart;i<=rowend && count<total ;i++){
            ans.push_back(matrix[i][colend]);
            count++;
        }
        colend--;
        for(int i=colend;i>=colstart && count<total ;i--){
            ans.push_back(matrix[rowend][i]);
            count++;
        }
        rowend--;
        for(int i=rowend;i>=rowstart && count<total;i--){
            ans.push_back(matrix[i][colstart]);
            count++;
        }
        colstart++;
    }
    return ans;
}
int main(){
    int row,col;
    cin>>row>>col;
    vector<int> spiral;   
    vector<vector<int>> vec(row,vector<int> (col,0));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>vec[i][j];
        }
    }
    print(vec);
    spiral=spiralOrder(vec);
    cout<<"2D Vector spiral matrix : ";
    for(auto itr:spiral) cout<<itr<<" ";
    cout<<endl;
    return 0;
}