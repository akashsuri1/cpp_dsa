#include<stdio.h>
#pragma pack(1)
struct a{
    char c;
    short int s;
};
struct b{
    short int a;
    char b;
    int c;
};
struct c{
    char a;
    double b;
    int c;
};
struct __attribute__((packed)) d{
    double a;
    int b;
    char c;
};
int main(){
    printf("%d\n",sizeof(struct a));
    printf("%d\n",sizeof(struct b));
    printf("%d\n",sizeof(struct c));
    printf("%d\n",sizeof(struct d));
    return 0;
}