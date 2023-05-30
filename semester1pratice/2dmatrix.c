#include<stdio.h>
void sum(int n,int m,int arr[n][m]);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            scanf("%d",&arr[j][k]);
        }
    }
    sum(n,m,arr);
    return 0;
}
void sum(int n,int m,int arr[n][m]){
    int even=0;
    int odd=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            if(arr[j][k]&1){
                odd=odd+arr[j][k];
            }else{
                even=even+arr[j][k];
            }
        }
    }
    printf("%d is the result\n",even-odd);
}