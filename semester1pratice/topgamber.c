#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int j=1;j<=n;j++){
        if(j%2==0){
            sum-=(1*1.0/j);
        }else{
            sum+=(1*1.0/j);
        }
    }
    printf("%f\n",sum);
    return 0;
}