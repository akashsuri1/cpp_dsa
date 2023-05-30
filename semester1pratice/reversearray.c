#include<stdio.h>
void printarray(int *ptr,int size);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    printarray(array,n);
    int *ptr=array;
    for(int j=0;j<n/2;j++){
        int temp=*(ptr+j);
        *(ptr+j)=*(ptr+n-1-j);
        *(ptr+n-1-j)=temp;
    }
    printarray(array,n);
    return 0;

}
void printarray(int *ptr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}