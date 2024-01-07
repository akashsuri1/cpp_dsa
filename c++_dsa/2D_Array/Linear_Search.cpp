#include<iostream>
using namespace std;
bool isfound(int arr[][3],int target,int rowindex,int colindex){
    for(int row=0;row<rowindex;row++){
        for(int col=0;col<colindex;col++){
            if(arr[row][col]==target) return 1;
        }
    }
    return 0;
}
void print(int arr[][3],int rowindex,int colindex){
    for(int i=0;i<rowindex;i++){
        for(int j=0;j<colindex;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int array[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>array[i][j];
        }
    }
    cout<<"The array\'s is :- "<<endl;
    print(array,3,3);
    int element;
    cout<<"Enter the element to searched for : ";
    cin>>element;
    if(isfound(array,element,3,3)){
        cout<<"The element is in the 2d-array."<<endl;
    }else{
        cout<<"It doesn\'t lie in it\'s 2-dimensions."<<endl;
    }
    return 0;
}