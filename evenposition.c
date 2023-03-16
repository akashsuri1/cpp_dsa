#include<stdio.h>
void evenelementsum(int *ptr,int size);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    printf("please enter the array elements : ");
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    evenelementsum(array,n);
    return 0;
}
void evenelementsum(int *ptr,int size){
    int sum=0;
    for(int j=0;j<size;j+=2){
        sum+= *(ptr+j);
    }
    printf("the sum is %d\n",sum);
}