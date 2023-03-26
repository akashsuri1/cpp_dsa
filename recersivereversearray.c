#include<stdio.h>
void recurssion(int arr[],int start,int end){
    if(start>=end){
        return;
    }else{
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        recurssion(arr,start+1,end-1);
    }
};
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }
    recurssion(array,0,n-1);
    for(int j=0;j<n;j++){
        printf("%d",array[j]);
    }
}