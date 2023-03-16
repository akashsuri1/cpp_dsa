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
    int x=0;
    for(int j=0;j<n;j++){
        if(array[j]<0){
               int temp=array[j];
               for(int k=j;k>x;k--){
                         array[k]=array[k-1];

               }
               array[x]=temp;
               x++;
        }
    }
    printarray(array,n);
    return 0;

}
void printarray(int *ptr,int size){
    for(int j=0;j<size;j++){
        printf("%d ",*(ptr+j));
    }
    printf("\n");
}