#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row>>col;
    //creating
    int** array=new int*[row];
    for(int i=0;i<row;i++){
        array[i]=new int[col];
    }
    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    //print
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //delete
    for(int i=0;i<row;i++){
        delete []array[i];
    }
    delete []array;
    return 0;
}