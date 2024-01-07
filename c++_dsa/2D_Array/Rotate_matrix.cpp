#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> vec){
    cout<<"The 2-d matrix is :"<<endl;
    for(auto vctr:vec){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int temp=matrix[j][i];
            matrix[j][i]=matrix[n-1-i][j];
            matrix[n-1-i][j]=matrix[n-1-j][n-1-i];
            matrix[n-1-j][n-1-i]=matrix[i][n-1-j];
            matrix[i][n-1-j]=temp;  
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    print(vec);
    rotate(vec);
    cout<<"After rotation "<<endl;
    print(vec);
    return 0;
}