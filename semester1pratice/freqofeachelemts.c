#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=1;
        if(freq[i]==-1){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count++;
                freq[j]=0;
            }   
        }
        }
        if(freq[i]==-1){
            freq[i]=count;
        }

    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d =%d\n",array[i],freq[i]);
        }
    }
    return 0;
}