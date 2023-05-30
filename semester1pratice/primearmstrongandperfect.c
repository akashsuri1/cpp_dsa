#include<stdio.h>
#include<math.h>
void prime(int n);
void armstrong(int n);
void perfectnumber(int n);
int main(){
    int n;
    scanf("%d",&n);
    prime(n);
    armstrong(n);
    perfectnumber(n);
    return 0;



}
void prime(int n){
    for(int k=2;k<n;k++){
        if(n%k==0){
            printf("not prime\n");
            return;
        }
    }
    printf("the no is prime\n");
}
void armstrong(int n){
     int armstong_t=0;
     int counter=0;
     for(int no=n;no>0;no/=10){
           counter++;
        }
     for(int no=n;no>0;no/=10){
        int digit=no%10;
        armstong_t+=pow(digit,counter);
     }
     if(n==armstong_t){
        printf("the no is armstrong number\n");
     }else{
        printf("the number is not an armstrong no\n");
     }
}
void perfectnumber(int n){
    int sum=0;
    for(int k=1;k<n;k++){
        if(n%k==0){
            sum+=k;
        }
    }
    if(sum==n){
        printf("the no is an perfect number\n");
    }else{
        printf("the no is not an perfect number\n");
    }
}