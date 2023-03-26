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
    if(n>m){
       int sum=0;
       for(int j=0;j<m;j++){
        sum+=array[j][j];
       }
       printf("%d is the sum\n",sum);
    }else{
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=array[j][j];
       }
       printf("%d is the sum\n",sum);
    }
    return 0;
}