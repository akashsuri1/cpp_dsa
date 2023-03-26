#include<stdio.h>
int main(){
    int n;
    printf("enter the n :");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    int min=array[0];
    for(int i=0;i<n;i++){
       if(array[i]>max){
           max=array[i];
       }
       if(array[i]<min){
        min=array[i];
       }
    }
    for(int j=0;j<n;j++){
        if(array[j]==max){
            max=j;
            break;
        }
    }
    int counter=0;
    for(int j=max;j>0;j--){
        int temp=array[j];
        array[j]=array[j-1];
        array[j-1]=temp;
        counter++;
    }
    for(int j=n-1;j>=0;j--){
        if(array[j]==min){
            min=j;
            break;
        }
    }
    for(int j=min;j<n-1;j++){
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        counter++;
    }
    printf("%d is the counter\n",counter);
    printf("it was an easy question\n");
    return 0;
}