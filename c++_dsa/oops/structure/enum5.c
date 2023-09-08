#include<stdio.h>
enum state{working=0,failed,freezed};
enum state currstate=freezed;
enum state findstate(){
    return currstate;
}
int main(){
    (findstate()==working)?(printf("working\n")):(printf("not working\n"));
    return 0;
}