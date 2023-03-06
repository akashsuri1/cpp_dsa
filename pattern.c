#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        int count=j;
        for(int k=1;k<=n;k++){
           printf("%d ",count);
           count+=j;
        }
        printf("\n");

    }
    return 0;
}