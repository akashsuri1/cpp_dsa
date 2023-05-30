#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n][m];
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            scanf("%d",&array[j][k]);
        }
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(k>j){
                array[j][k]=0;
            }
        }
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            printf("%d ",array[j][k]);
        }
        printf("\n");
    }
    return 0;
}