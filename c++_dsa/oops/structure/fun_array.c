#include<stdio.h>
void add(int a,int b){
    printf("%d\n",a+b);
}
void subtract(int a,int b){
    printf("%d\n",a-b);
}
void multiply(int a,int b){
    printf("%d\n",a*b);
}
int main(){
    void (*fun_ptr_arr[])(int,int)={&add,&subtract,&multiply};
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0;i<=2;i++){
        (*fun_ptr_arr[i])(a,b);
    }
    return 0;
}