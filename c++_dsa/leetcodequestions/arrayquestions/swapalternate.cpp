#include<iostream>
using namespace std;
// a\ function to validate our answer
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void swapalternate(int arr[],int size){
    //we will increase i by 2 to swap the next pair always not the same element
    for(int i=0;i<size;i+=2){
        //if next element belong to the array
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={1,5,7,11,6,78,9,12};
    int odd[5]={11,7,23,44,5};
    swapalternate(even,8);
    printArray(even,8);
    cout<<endl;
    swapalternate(odd,5);
    printArray(odd,5);
    return 0;
}
