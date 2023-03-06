#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    scanf("%d",&a);
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    ptr[0]=2;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int j=0;j<5;j++){
        printf("%d\t",ptr[j]);
    }
    return 0;

}