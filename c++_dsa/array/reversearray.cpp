#include<iostream>
using namespace std;
void reversearray(int array[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
    //swap is an predefined function to swap value of two variable
    //we increase start value and decrase end do this until start is less than end 
} 
void printarray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={11,6,7,8,9,0};
    reversearray(arr,5);
    reversearray(brr,6);
    printarray(arr,5);
    printarray(brr,6);
    return 0;
}