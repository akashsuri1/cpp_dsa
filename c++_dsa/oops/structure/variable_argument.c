#include<stdio.h>
#include<stdarg.h>
int sum(int number,...){
    int sum=0;
    va_list result;
    va_start(result,number);
    for(int i=0;i<number;i++){
        int n=va_arg(result,int);
        sum+=n;
    }
    va_end(result);
    return sum;
}
int main(){
    printf("%d \n",sum(5,1,2,3,4,5));
    printf("%d \n",sum(6,1,2,3,4,5,6));
    return 0;
}