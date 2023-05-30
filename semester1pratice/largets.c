#include<stdio.h>
#include<limits.h>
void largest(int array[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
   largest(array,n-1);
    return 0;
}
void largest(int array[],int n){
    static int large;
    
    if(array[n]>large){
        large=array[n];
    }
    if(n<=0){
       printf("%d",large); 
       return; 
    }
    else{
        largest(array,n-1);
    }
}