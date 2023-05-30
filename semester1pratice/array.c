#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int array[n];
        for(int j=0;j<n;j++){
            scanf("%d",&array[j]);
        }
        for(int j=0;j<n-1;j+=2){
            if(array[j]!=array[j+1]){
                printf("%d\n",array[j]);
                printf("%d\n",j);
                break;
            }
        
        }
        if(1){
            if(array[n]!=array[n-1]){
                printf("%d\n",array[j]);
                printf("%d\n",j);
            }
        }
    }
    return 0;
}