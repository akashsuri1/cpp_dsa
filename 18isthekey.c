#include<stdio.h>
void insertarray(int arr[],int n);
void printarray(int arr[],int n);
void updatearray(int arr[],int n);
void searcharray(int arr[],int n);
void deletearray(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int array[1000];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    printf("enter the following:\n1 for insert\n2 for update\n3 for delete\n4 for display\n5 for search\n");
    int k;
    int f=1;
    scanf("%d",&k);
    do{
    
    switch(k){
        case 1:insertarray(array,n);
               break;
        case 2:updatearray(array,n);
               break;
        case 3:deletearray(array,n);
               break;
        case 4:printarray(array,n);
               break;
        case 5:searcharray(array,n);
               break;
        default:printf("Invalid operation\n");
    }
    printf("enter 1 if you want more operation else print 0 :");
    scanf("%d",&f);
    scanf("%d",&k)
    }while(f);

}
void insertarray(int arr[],int n){
    int k;
    printarray(arr,n);
    printf("enter the index to be placed: (i<%d)",n);
    scanf("%d",&k);
    for(int j=n-1;j>=k;j--){
        arr[j+1]=arr[j];
    }
    int t;
    printf("please enter the element to be inserted: ");
    scanf("%d",&t);
    arr[k]=t;
    printarray(arr,n+1);

}
void printarray(int arr[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
void updatearray(int arr[],int n){
    int k;
    printf("enter the index to be updated (<%d)",n);
    scanf("%d",&k);
    printf("enter the new element: ");
    int t;
    scanf("%d",&t);
    arr[k]=t;
    printarray(arr,n);
}
void searcharray(int arr[],int n){
    printf("enter the element to be searched for: ");
    int temp;
    scanf("%d",&temp);
    for(int j=0;j<n;j++){
        if(arr[j]==temp){
            printf("the element is found at %d index\n",j);
            return;
        }
    }
    printf("the element is not found\n");
}
void deletearray(int arr[],int n){
    int k;
    printf("enter the index of the element (<%d)",n);
    scanf("%d",&k);
    for(int t=k;t<n;t++){
        arr[t]=arr[t+1];
    }
    if(k<n){
    printarray(arr,n-1);
    }else{
        printarray(arr,n);
    }
}