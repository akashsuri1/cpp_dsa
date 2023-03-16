#include<stdio.h>
void sorted(int *ptr,int size);
void printarr(int *ptr,int size);
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
       scanf("%d",&array[j]); 
    }
    printarr(array,n);
    sorted(array,n);
    printarr(array,n);
    return 0;

}
void printarr(int *ptr,int size){
    for(int k=0;k<size;k++){
        printf("%d ",*(ptr+k));
    }
    printf("\n");
}
void sorted(int *ptr,int size){
    for(int j=0,x=0;j<size && x<size;j++){
        if(*(ptr+j)<0){
            int temp=*(ptr+j);
            for(int l=j;l>x;l--){
                  *(ptr+l)=*(ptr+l-1);
            }
            *(ptr+x)=temp;
            x++;
        }
    }
}