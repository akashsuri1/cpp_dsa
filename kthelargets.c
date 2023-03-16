#include<stdio.h>
void insertionsort(int array[],int size);
int main(){
      int n;
      scanf("%d",&n);
      int array[n];
      for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
      }
      insertionsort(array,n);
      int k;
      printf("enter the k");
      scanf("%d",&k);
      int l=1;
      int j=n-1;
      while(l!=k && j>=0){
        if(array[j]!=array[j-1]){
              l++;
        }
        j=j-1;
      }
      printf("%d",array[j]);
}
void insertionsort(int array[],int size){
    for(int i=1;i<size;i++){
        int key=array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}