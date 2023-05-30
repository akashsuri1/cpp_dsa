#include<stdio.h>
int partion(int arr[],int low,int high);
void printarray(int *ptr,int n);
void swap(int *a,int *b);
void quicksort(int arr[],int low,int high);
int main(){
    int n;
    printf("please enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    quicksort(array,0,n-1);
    printarray(array,n);
    return 0;

}
void printarray(int *ptr,int n){
    for(int j=0;j<n;j++){
        printf("%d ",*(ptr+j));
    }
    printf("\n");
}
int partion(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[high],&arr[i+1]);
    return i+1;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partion(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}