#include<stdio.h>
void printarr(int *ptr,int size);
void rotatearray(int *ptr,int size ,int no);
int main(){
      int n;
      scanf("%d",&n);
      int array[n];
      int *ptr=array;
      for(int k=0;k<n;k++){
        scanf("%d",ptr+k);
      }
      int k;
      printf("the number of times to left shift: ");
      scanf("%d",&k);
      rotatearray(array,n,k);
      printarr(array,n);
      return 0;

}
void printarr(int *ptr,int size){
    for(int k=0;k<size;k++){
          printf("%d ",*(ptr+k));
    }
    printf("\n");
}
void rotatearray(int *ptr,int size,int no){
    printarr(ptr,size);
    for(int l=0;l<no;l++){
        int temp=*ptr;
        for(int k=0;k<size-1;k++){
            *(ptr+k)=*(ptr+k+1);
        }
        *(ptr+size-1)=temp;
    }
}