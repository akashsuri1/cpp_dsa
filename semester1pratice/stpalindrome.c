#include<stdio.h>
#include<string.h>
int main(){
    char array[1000];
    fgets(array,1000,stdin);
    array[strlen(array)-1]='\0';
    int k=strlen(array);
    int flag=1;
    for(int j=0;j<k/2;j++){
        if(array[j]!=array[k-1-j]){
            flag=0;
            printf("not an palindrome\n");
            break;
        }
    }
    if(flag){
        printf("palindrome\n");
    }
    return 0;
}