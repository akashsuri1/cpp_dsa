#include<stdio.h>
void swap(int *a,int *b);
void selectionsort(int arr[],int size);
void bubblesort(int arr[],int size);
void insertionsort(int arr[],int size);
int partion(int arr[],int l,int h);
void quicksort(int arr[],int l,int h);
void printarray(int arr[],int n);
int main(){
    int arr[]={23,44,55,55,66,-123,-97,4};
    quicksort(arr,0,sizeof(arr)/sizeof(arr[0])-1);
    printarray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;


}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(int arr[],int size){
    for(int j=0;j<size;j++){
        int min=j;
        for(int i=j+1;i<size;i++){
            if(arr[min]>arr[i]){
                min=i;
            }
        }
        swap(&arr[j],&arr[min]);
    }
}
void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void insertionsort(int arr[],int size){
    for(int start=1;start<size;start++){
        int key=arr[start];
        int j=start-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int partion(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
       int pi=partion(arr,l,h);
       quicksort(arr,l,pi-1);
       quicksort(arr,pi+1,h);
    }else{
        return;
    }
}
void printarray(int arr[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}