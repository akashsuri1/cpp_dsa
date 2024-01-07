#include<iostream>
using namespace std;
void print(int arr[][4],int row,int col){
    cout<<"The 2-d array is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void waveprint(int arr[][4],int row,int col){
    cout<<"The wave print is : "<<endl;
    for(int i=0;i<col;i++){
        if(i&1){
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
    }
    cout<<endl;    
}
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,4,4);
    waveprint(arr,4,4);
    return 0;
}