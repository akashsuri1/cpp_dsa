#include<stdio.h>
enum week{
    sun=1,
    mon,
    tue,
    wed,
    thur=10,
    fri,
    sat=20
};
int main(){
    printf("%d %d %d %d %d %d %d\n",sun,mon,tue,wed,thur,fri,sat);
    return 0;
}