#include<stdio.h>
#include<conio.h>
int main(){
    char arr[200];
    char k;
    scanf("%c",&k);
    getchar();
    fgets(arr,200,stdin);
    printf("%c \n%s\n",k,arr);
    
}