#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int revere=0;
    for(int num=n ; num>0; num=num/10){
          int digit=num%10;
          revere=revere*10+digit;
    }
    printf("%d\n",n-revere);
    return 0;
}