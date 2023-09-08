#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
void greeting(){
    printf("hello world\n");
}
int main(){
    int (*fptr)(int,int);
    fptr=sum;
    void (*vptr)()=&greeting;
    (*vptr)();
    printf("the sum is %d\n",(*fptr)(4,5));
    return 0;
}