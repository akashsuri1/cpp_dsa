#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> vec){
    cout<<"The 2-d matrix is : "<<endl;
    for(auto vctr:vec){
        for(auto itr:vctr){
            cout<<itr<<" ";
        }
    }
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int col=matrix[0].size();
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int element=matrix[mid/col][mid%col];
        if(element==target){
            return true;
        }else if(element>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
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