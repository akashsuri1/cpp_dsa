#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
        printf("%d ",array[j]);
    }
    printf("\n");
    getchar();
    int k;
    scanf("%d",&k);
    int temp;
    for(int j=0;j<n;j++){
        if(array[j]==k){
            temp=j;
            break;
        }
    }
    for(int j=temp-1;j>=0;j--){
        if(array[j]>=k){
            int helper=array[j];
            for(int l=j;l<temp;l++){
                  array[l]=array[l+1];
            }
            array[temp]=helper;
            temp=temp-1;
        
    }
    
    }
    for(int j=temp+1;j<n;j++){
        if(array[j]<k){
            int helper=array[j];
            for(int l=j;l>temp;l--){
                array[l]=array[l-1];
            }
            array[temp]=helper;
            temp=temp+1;
        }
    }
    for(int j=0;j<n;j++){
        
        printf("%d ",array[j]);
    }
    printf("\n");
    return 0;
}
