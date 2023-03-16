#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int check[n];
    for(int j=0;j<n;j++){
         scanf("%d",&array[j]);
         check[j]=0;
    }
    for(int k=0;k<n;k++){
        if(check[k]==1){
            continue;
        }
        int count=1;
        for(int j=k+1;j<n;j++){
            if(array[j]==array[k]){
                count++;
                check[j]=1;
            }
        }
        printf("%d - %d\n",array[k],count);
    }
    
    return 0;
}