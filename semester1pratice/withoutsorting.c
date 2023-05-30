#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    int max=array[0];
    int secondmax;
    for(int j=0;j<n;j++){
            if(array[j]>max){
                max=array[j];
            }else{
                secondmax=array[j];
            }
    }
    for(int j=0;j<n;j++){
        if(array[j]<max){
            if(array[j]>secondmax){
                secondmax=array[j];
            }
        }
    }
    printf("%d\n",secondmax);
    return 0;
}