#include<stdio.h>
int recursive(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d is the sum\n",recursive(n));
    return 0; 
}
int recursive(int n){
    if(n==0){
        return 0;
    }
    return n%10+recursive(n/10);
}