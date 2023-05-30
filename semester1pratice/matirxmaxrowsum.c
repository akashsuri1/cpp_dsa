#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    int max=INT_MIN;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        printf("\n");
        if(sum>max){
            max=sum;
        }
    }
    int col=INT_MIN;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
             sum+=arr[j][i];
        }
        if(sum>col){
            col=sum;
        }
    }
    printf("row max=%d and colmax=%d\n",max,col);
    return 0;
}