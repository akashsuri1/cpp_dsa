#include<stdio.h>
int main(){
    label:
      printf("welcome to label :");
      goto end;
    printf("hello world\n");
    goto label;
    end:
      printf("the end block\n");

    return 0;
}