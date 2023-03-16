#include<stdio.h>
void printarr(int *ptr,int size);
void rotatedanotherway(int *ptr,int size,int n);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int k=0;k<n;k++){
        scanf("%d",&array[k]);
    }
    printarr(array,n);
    printf("enter the number of times to rotate array: ");
    int k;
    scanf("%d",&k);
    rotatedanotherway(array,n,k);
    printarr(array,n);
    return 0;
}
void printarr(int *ptr,int size){
    for(int k=0;k<size;k++){
        printf("%d ",*(ptr+k));
    }
    printf("\n");
}
void rotatedanotherway(int *ptr,int size ,int n){
    for(int k=0;k<n;k++){
        int temp=*(ptr+size-1);
        for(int k=size-1;k>=1;k--){
            *(ptr+k)=*(ptr+k-1);
        }
        *(ptr)=temp;
    }
}