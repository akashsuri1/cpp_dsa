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
        int k;
        scanf("%d",&k);
        int count=0;
        for(int j=0;j<n;j++){
            if(array[j]%k==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}