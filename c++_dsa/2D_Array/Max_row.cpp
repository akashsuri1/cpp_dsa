#include<iostream>
#include<limits.h>
using namespace std;
int maxrow(int arr[][3],int rowIndex,int colIndex){
    int maxi=INT_MIN;
    int ans=-1;
    for(int row=0;row<rowIndex;row++){
        int sum=0;
        for(int col=0;col<colIndex;col++){
            sum+=arr[row][col];
        }
        if(maxi<sum){
            maxi=sum;
            ans=row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return ans;
}
void print(int arr[][3],int rowIndex,int colIndex){
    cout<<"The array is :"<<endl;
    for(int row=0;row<rowIndex;row++){
        for(int col=0;col<colIndex;col++) cout<<arr[row][col]<<" ";
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,3,3);
    int ans=maxrow(arr,3,3);
    cout<<"The max row is : "<<ans+1<<endl;
    return 0;
}