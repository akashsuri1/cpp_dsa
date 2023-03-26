#include<stdio.h>
void printmartrix(int n,int m,int arr[][m]);
void inputmatrix(int n,int m,int arr[][m]);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    inputmatrix(n,m,arr);
    printmartrix(n,m,arr);
    int n2,m2;
    scanf("%d %d",&n2,&m2);
    int arr2[n2][m2];
    inputmatrix(n2,m2,arr2);
    printmartrix(n2,m2,arr2);
    if(m==n2){
          int arr3[n][m2];
          for(int j=0;j<n;j++){
              for(int k=0;k<m2;k++){
                 int sum=0;
                 for(int l=0;l<n2;l++){
                    sum = sum+ (arr[j][l]*arr2[l][k]);
                    
                 }
                 printf("%d is the sum\n",sum);
                 arr3[j][k]=sum;
              }
          }
          printmartrix(n,m2,arr3);
    
    }else{
        printf("incompatible\n");
    }

}
void printmartrix(int n,int m,int arr[][m]){
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            printf("%d ",(*((*arr+j)+k)));
        }
        printf("\n");
    }
    printf("\n");
}
void inputmatrix(int n,int m,int arr[][m]){
       for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            scanf("%d",&arr[j][k]);
        }
    
    }   
}