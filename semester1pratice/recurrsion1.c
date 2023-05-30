#include<stdio.h>
int no;
int fibanocci(int n){
    if(n==1||n==2){
        return 1;
    }
    return fibanocci(n-1)+fibanocci(n-2);
}
void print(){
    static int n=1;
    if(n<no){

    printf("%d\n",fibanocci(n));
    n++;
    return print(n);
    }
    return;
}
int main(){
    scanf("%d",&no);
    print(1);
    return 0;
}