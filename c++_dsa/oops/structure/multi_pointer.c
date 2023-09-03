#include<stdio.h>
typedef int* Pointer;
int main(){
    int x=4,y=5;
    Pointer a=&x,b=&y; // a is treated as pointer while b as an integer
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}
//typedef is used to solve this problem