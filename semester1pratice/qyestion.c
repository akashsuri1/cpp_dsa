#include<stdio.h>
int gcd(int a,int b){
    if(a==b){
        return a;
    }else{
        if(b>a){
            return gcd(a,b-a);
        }else{
            return gcd(a-b,b);
        }
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("gcd is %d\n",gcd(a,b));
    return 0;
}