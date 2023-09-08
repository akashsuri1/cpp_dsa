#include<stdio.h>
struct temp1{
    unsigned int x:5;
    unsigned int y:8;
};
struct forced{
    unsigned int x:5;
    unsigned int :0;
    int y; 
};
struct test{
    long long int  y:33;
    unsigned int x;
    unsigned int z;
};
struct check{
    unsigned int y:2;
};
int main(){
    struct check temp;
    temp.y=5;
    printf("%d\n",temp.y);
    printf("%d the size of structure\n",sizeof(struct temp1));
    printf("%d the size of structure\n",sizeof(struct test));
    printf("%d the size of aligned structure\n",sizeof(struct forced));
    return 0;
}