#include<stdio.h>
void printmatrix(int n,int m,int arr[][m]);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
             scanf("%d",&arr[j][k]);
        }
    }
    int arr2[m][n];
    for(int j=0;j<n;j++){
        for(int k=j;k<m;k++){
            int temp=arr[j][k];
            arr[j][k]=arr[k][j];
            arr[k][j]=temp;
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            arr2[j][k]=arr[k][j];
        }
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
             printf("%d ",arr[j][k]);
        }
        printf("\n");
    }
    

}