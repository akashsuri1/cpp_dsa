#include<iostream>
using namespace std;
int main(){
    //creation
    int array[3][4];
    //row wise input
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>array[row][col];
        }
    }
    //row wise print
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}