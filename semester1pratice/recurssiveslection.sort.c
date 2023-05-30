#include<stdio.h>
void selectionsort(int array[],int s,int end);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    selectionsort(array,0,n);
    for(int j=0;j<n;j++){
        printf("%d",array[j]);
    }
    return 0;
}
void selectionsort(int array[],int s,int end){
    if(s>=end){
       return;
    }
    int min=s;

    for(int j=s+1;j<end;j++){
        if(array[j]<array[min]){
            min=j;
        }
    }
    int temp=array[s];
    array[s]=array[min];
    array[min]=temp;
    selectionsort(array,s+1,end);
}