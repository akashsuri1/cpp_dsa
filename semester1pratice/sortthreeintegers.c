#include<stdio.h>
void sorter(int *x,int *y,int *z);
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d %d %d before sorting",x,y,z);
    sorter(&x,&y,&z);
    printf("%d %d %d",x,y,z);
    return 0;
}
void sorter(int *x,int *y,int *z){
    if(*x>=*y && *x>=*z){
        if(*y>*z){
        int temp=*z;
        *z=*x;
        *x=temp;
        }else{
            int temp=*z;
            *z=*x;
            *x=*y;
            *y=temp;
        }
    }
    else if(*z>=*y && *z>=*x){
          if(*x>=*y){
            int temp=*y;
            *y=*x;
            *x=temp;

          }
    }else if(*y>=*x && *y>=*z){
           if(*x>=*z){
            int temp=*z;
            *z=*y;
            *y=*x;
            *x=temp;
           }else{
             int temp=*z;
             *z=*y;
             *y=temp;
           }
    }
}