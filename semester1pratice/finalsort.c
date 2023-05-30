#include<stdio.h>
void bubblesort(int arr[],int n);
void selectionsort(int arr[],int n);
void insertionsort(int arr[],int n);
int binarysearch(int arr[],int x,int l,int h);
int partion(int arr[],int l,int h);
void swap(int *a,int *b);
void quicksort(int arr[],int l,int h);
int r_binary(int arr[],int x,int l,int h);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    quicksort(array,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    int x;
    scanf("%d",&x);
    printf("%d binar search\n",r_binary(array,x,0,n-1));
    return 0;
}
void bubblesort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int swaped=0;
        for(int j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                swap(&array[j],&array[j+1]);
                swaped++;
            }
        }
        if(swaped==0){
            return;
        }
    }
}
void selectionsort(int array[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[min]){
                min=j;
            }
        }
        swap(&array[i],&array[min]);
    }
}
void insertionsort(int array[],int n){
    for(int i=1;i<n;i++){
        int start=i-1;
        int key=array[i];
        while(start>=0 && array[start]>key){
            array[start+1]=array[start];
            start--;
        }
        array[start+1]=key;
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
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
int binarysearch(int arr[],int x,int l,int h){
    while(l<=h){
          int mid=l+(h-l)/2;
          if(arr[mid]==x){
            return mid;
          }else if(arr[mid]>x){
            h=mid-1;
          }else if(arr[mid]<x){
            l=mid+1;
          }
    }
    return -1;
}
int r_binary(int arr[],int x,int l,int h){
    if(l>h){
        return -1;
    }
    int mid=l+(h-l)/2;
    if(arr[mid]==x){
        return mid;
    }else if(arr[mid]<x){
        int t=0;
        t+=r_binary(arr,x,mid+1,h);
        return t;
    }else if(arr[mid]>x){
        int t=0;
        t+=r_binary(arr,x,l,mid-1);
        return t;
    }
}