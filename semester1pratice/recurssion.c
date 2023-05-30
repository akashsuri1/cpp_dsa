#include<stdio.h>
void printarray(int arr[],int s,int n);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    printarray(array,0,n);
    return 0;

} 
void printarray(int arr[],int s,int n){
    if(s>=n){
        return;
    }
    printf("%d\n",arr[s]);
    return printarray(arr,s+1,n); 
}   