#include<stdio.h>
static inline int product(int a,int b){
    return a*b; 
}
static inline float salary(int salary,float interest){
    return salary*interest;
}
int main(){
    printf("the result is %d\n",product(5,4));
    printf("the result is %d\n",product(3,4));
    printf("the salary is %f\n",salary(2000,4.3));
    return 0;
}