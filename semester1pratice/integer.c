#include<stdio.h>
void changer(int *x);
int main(){
    int *ptr;
    int* ptr2;
    int a;
    scanf("%d",&a);
    ptr=&a;
    ptr2=&a;
    printf("%d\n",*ptr);
    changer(&a);
    printf("%d\n",*ptr2);
    return 0;
}
void changer(int *x){
    *x=7;
}