#include<stdio.h>
void fun(int n){
    while(n--){
    printf("hello world\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    void (*ptr)(int)=&fun;
    ptr(n);
    return 0;
}