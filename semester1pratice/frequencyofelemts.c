#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int array[n];
   int freq[n];
   for(int i=0;i<n;i++){
     scanf("%d",&array[i]);
     freq[i]=0;
   }
   for(int j=0;j<n;j++){
     if(freq[j]==1){
        continue;
     }
     int count=1;
     for(int k=j+1;k<n;k++){
        if(array[j]==array[k]){
            count++;
            freq[k]=1;
        }
     }
     printf("%d is the count of %d\n",array[j],count);
   }
   return 0;
}