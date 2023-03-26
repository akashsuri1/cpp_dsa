#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1-j;k++){
            if(array[k]<array[k+1]){
                int temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp;
            }
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);
    }
    printf("\n");
    return 0;

}