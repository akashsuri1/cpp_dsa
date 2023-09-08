#include<stdio.h>
enum week{mon,tue,wed,thur,fri,sat,sun};
int main(){
    enum week day;
    day=wed;
    printf("%d\n",day);
    printf("%d\n",sun);
    return 0;
}