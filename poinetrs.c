#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr++
    return 0;
}