#include<stdio.h>
#include<stdlib.h>
int compare(const void*x_ptr,const void *y_ptr){
    int x=*(int *)x_ptr;
    int y=*(int *)y_ptr;
    return x-y;//acsecding order
}
int compare2(const void*x_ptr,const void *y_ptr){
    int x=*(int *)x_ptr;
    int y=*(int *)y_ptr;
    return y-x;//descending order
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    qsort(arr,9,sizeof(int),compare);
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    qsort(arr,9,sizeof(int),compare2);
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}