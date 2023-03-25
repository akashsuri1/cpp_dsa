#include<stdio.h>
#include<math.h>
void armstrong(int n){
    int count=0;
    int temp=0;
    for(int num=n;num>0;num=num/10){
        count++;
    }
    for(int num=n;num>0;num=num/10){
        int digit=num%10;
        int temp+=pow(digit,count);
    }
    if(temp==n){
        printf("%d armstrong number\n",n);
        return;
    }
    return;
}
int main(){
    int count=0
    int i=1;
    while(count<101){
           armstrong()
    }
}