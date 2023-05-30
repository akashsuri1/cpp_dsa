#include<stdio.h>
int main(){
    void *ptr;
    char x='a';
    char s[20]="i am fine with life";
    int t=234;
    float d=345;
    ptr=s;
    printf("%s\n",(char *)(ptr));
    ptr=&x;
    printf("%c\n",*(char *)(ptr));
    ptr=&t;
    printf("%d\n",*(int *)(ptr));
    ptr=&d;
    printf("%f\n",*(float *)(ptr));
    printf("%d\n",sizeof(char ***));
    int l=30,*y,*z;
    y=&l;
    z=y;
    printf("%d %u %u\n",l,y,z);
    *y++=*z++;
    l++;
    printf("%d %u %u\n",l,y,z);
    printf("%c\n",7["indiabix"]);
    return 0;
}