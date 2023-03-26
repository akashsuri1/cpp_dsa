#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            scanf("%d",&arr[j][k]);
        }
    }
    int count=0;
    for(int j=0;j<n;j++){
        int flag=0;
        for(int k=0;k<m;k++){
            if(j!=k && arr[j][k]!=0){
                  flag=1;
                  count=1;
                  break;
            }else if(j==k){
                if(arr[j][k]!=1){
                    flag=1;
                    count=1;
                    break;
                }
            }
        }
        if(flag){
            break;
        }
    }
    if(count==0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}