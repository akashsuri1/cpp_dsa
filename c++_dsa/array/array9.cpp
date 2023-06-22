#include<iostream>
using namespace std;
void printarray(int arr[15],int size){
    //this  way we can define an function with predefined size of the array but its an bad practice to follow
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int array[15];
    for(int i=0;i<15;i++){
        array[i]=i+1;
    }
    printarray(array,15);
    return 0;
}