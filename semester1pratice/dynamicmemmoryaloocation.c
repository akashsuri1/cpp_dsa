#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)malloc(4*sizeof(int));
    ptr[0]=234;
    ptr[1]=2345;
    ptr[2]=2345;
    ptr[3]=4567;
    for(int k=0;k<4;k++){
        printf("%d\n",ptr[k]);
    }
    return 0;
}