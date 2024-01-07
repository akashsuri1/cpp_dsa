#include<iostream>
using namespace std;
void print(int arr[][3],int rowindex,int colindex){
    for(int i=0;i<rowindex;i++){
        for(int j=0;j<colindex;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int array[][3]={1,2,3,4,5,6,7,8,9,10,11};
    int array2[][3]={{1,2,3},{4},{5}};
    cout<<"First array :"<<endl;
    print(array,4,3);
    cout<<"Second array :"<<endl;
    print(array2,3,3);
    return 0;
}