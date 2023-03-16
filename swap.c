#include<stdio.h>
void swap(int a,int b);
void call_ref(int* x,int* y);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    swap(a,b);
    call_ref(&a,&b);  
    printf("a=%d and b=%d\n",a,b);
    return 0;
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d and b=%d\n",a,b);
}
void call_ref(int *x,int *y){
    int temp= *x;
    *x = *y;
    *y= temp;
}