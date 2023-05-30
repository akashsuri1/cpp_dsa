#include<stdio.h>
void selectionsort(int arr[],int size);
void bubblesort(int arr[],int size);
void insertionsort(int arr[],int size);
int main(){
    int array[]={33,5,189,34,56,79,3,3,5};
    insertionsort(array,9);
    for(int j=0;j<9;j++){
        printf("%d ",array[j]);
    }
    return 0;
     
}
void selectionsort(int array[],int size){
    for(int j=0;j<size;j++){
        int min=j;
        for(int k=j+1;k<size;k++){
            if(array[k]<array[min]){
                min=k;
            }
        }
        int temp=array[j];
        array[j]=array[min];
        array[min]=temp;
    }
}
void bubblesort(int array[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
             if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
             }
        }
    }
}
void insertionsort(int array[],int size){
    for(int start=1;start<size;start++){
        int key=array[start];
        int j=start-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
       
}
}