#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    int flag=1;
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            if(array[j][k]!=array[k][j]){
                // printf("%d %d %d",array[j][k],j,k);
                flag=0;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag){
        printf("yes a symetric matrix\n");
    }else{
        printf("not a symetric matrix\n");
    }
}