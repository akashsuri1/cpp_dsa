#include<stdio.h>
void array_2d(int n,int m,int array[][m]);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n][m];
    array_2d(n,m,array);
    int k,d;
    scanf("%d %d",&k,&d);
    int array2[k][d];
    array_2d(k,d,array2);
    if(m!=k){
        printf("not compatible for multplication\n");
    }else{
        int array3[n][d];
        for(int i=0;i<n;i++){
            for(int j=0;j<d;j++){
                array3[i][j]=0;
                for(int k=0;k<m;k++){
                        array3[i][j]+=(array[i][k])*(array2[k][j]);               
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<d;j++){
                printf("%d ",array3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
void array_2d(int n,int m,int array[][m]){
    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            scanf("%d",&array[j][k]);
        }
    }
}