#include<iostream>
using namespace std;
void print(int arr[][4],int rowindex,int colindex){
    for(int i=0;i<rowindex;i++){
        for(int j=0;j<colindex;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //creation of 2d array
    int array[3][4];
    //taking input of 2d array
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin>>array[row][col];
        }
    }
    print(array,3,4);
    return 0;
}