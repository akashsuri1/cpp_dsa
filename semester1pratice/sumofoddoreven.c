#include<stdio.h>
int sumofeven(int n);
int sumofodd(int n);
void printstring(char array[],int s);
int d_b(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d and %d \n",sumofeven(n),sumofodd(n));
    printstring("i am akash",0);
    printf("\n");
    printf("%d is binary\n",d_b(15));
    return 0;   
}
int sumofeven(int n){
    if(n==2){
        return 2;
    }
    if((n&1)==0){
       return n+sumofeven(n-1);
    }else{
        return sumofeven(n-1);
    }
}
int sumofodd(int n){
    if(n==1){
        return 1;
    }
    if(n&1){
        return n+sumofodd(n-1);
    }else{
        return sumofodd(n-1);
    }
}
void printstring(char array[],int s){
    if(array[s]=='\0'){
        return;
    }
    printstring(array,s+1);
    printf("%c",array[s]);
}
int d_b(int n){
    if(n==0){
        return 0;
    }
    return d_b(n/2)*10+n%2;
}