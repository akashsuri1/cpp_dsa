#include<stdio.h>
#include<math.h>
int  prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(int n=num;n>0;n=n/10){
        int digit=n%10;
        if(prime(digit)==1){
            sum+=digit;
        }
    }
    printf("%d\n",sum);
    return 0;
}