#include<stdio.h>
void fun(int a){
    printf("this ios amazing %d\n",a);
}
int main(){
    void (*ptr)(int)=&fun;
    ptr(240);
    return 0;
}