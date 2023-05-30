// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
       
        for(int l=0;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}