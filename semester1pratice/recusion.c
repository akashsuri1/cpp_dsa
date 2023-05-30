#include<stdio.h>
int countofdigits(int sum);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d is the sum\n",countofdigits(n));
    return 0;
}
int countofdigits(int sum){
    if(sum==0){
        return 0;
    }
    return 1+countofdigits(sum/10);
}