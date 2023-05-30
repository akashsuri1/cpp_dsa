#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.txt","r");
    if(fptr==NULL){
        printf("null is used to denote file doesnt exsist\n");
    }
    fclose(fptr);
    return 0;
}