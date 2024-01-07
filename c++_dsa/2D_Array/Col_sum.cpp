#include<iostream>
using namespace std;
void print(int arr[][4],int rowIndex,int colIndex){
    cout<<"The array is :"<<endl;
    for(int row=0;row<rowIndex;row++){
        for(int col=0;col<colIndex;col++) cout<<arr[row][col]<<" ";
        cout<<endl;
    }
}
void ColSum(int arr[][4],int rowIndex,int colIndex){
    int sum=0;
    cout<<"The sum are : ";
    for(int col=0;col<colIndex;col++){
        for(int row=0;row<rowIndex;row++) sum+=arr[row][col];
        if(col!=colIndex-1)
            cout<<sum<<" ";
        else
            cout<<sum<<endl;
        sum=0;
    }
}
int main(){
    int array[3][4];
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++) 
            cin>>array[row][col];
    }
    print(array,3,4);
    ColSum(array,3,4);
    return 0;
}