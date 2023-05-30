#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n][m];
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            scanf("%d",&array[j][k]);
        }
    }
    int array2[m][n];
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
           array2[j][k]=array[k][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
             printf("%d ",array2[j][k]);
        }
        printf("\n");
    }
    return 0;


}