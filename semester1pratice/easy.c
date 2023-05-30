#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int counter=0;
    while(n!=0){
        if(n%2==0){
            counter++;
            n=n/2;
        }else{
            n--;
            counter++;
        }
    }
    printf("%d is count\n",counter);
    return 0;
}