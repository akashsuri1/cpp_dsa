#include<stdio.h>
void swap(int *a,int *b);
void bubblesort(int arr[],int last);
void r_print(int array[],int last);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    bubblesort(array,n);
    r_print(array,n-1);
    return 0;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void r_print(int array[],int l){
       if(l==-1){
          return;
       }
       r_print(array,l-1);
       printf("%d ",array[l]);
}
void bubblesort(int arr[],int last){
    if(last==0){
        return;
    }
    int count=0;
    for(int j=0;j<last-1;j++){
        if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
        }
        count++;
    }
    if(count==0){
        return;
    }
    bubblesort(arr,last-1);
}