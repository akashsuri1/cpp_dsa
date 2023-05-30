#include<stdio.h>
void arrayinput(int *ptr,int size);
void printarray(int *ptr,int size);
void insertionsort(int *ptr,int size);
int main(){
    int n;
    scanf("%d",&n);
    int array1[n];
    arrayinput(array1,n);
    printarray(array1,n);
    int x;
    scanf("%d",&x);
    int array2[x];
    arrayinput(array2,x);
    printarray(array2,x);
    insertionsort(array1,n);
    insertionsort(array2,x);
    printarray(array1,n);
    printarray(array2,x);
    int array3[n+x];
    int k=0,k2=0,j=0;
        while(k<n && k2<x){
            if(array1[k]<array2[k2]){
                 array3[j]=array1[k];
                 k=k+1;
                 
            }else{
                array3[j]=array2[k2];
                k2=k2+1;

            }
            j++;
        }
        while(k<n){
               array3[j]=array1[k];
               k++;
               j++;
        }
        while(k2<x){
            array3[j]=array2[k2];
            k2++;
            j++;
        }
   printarray(array3,n+x);
   return 0;
    


}
void arrayinput(int *ptr,int size){
    printf("enter the input");
    for(int j=0;j<size;j++){
        scanf("%d",ptr+j);
    }
    
};
void insertionsort(int *ptr,int size){
    for(int start=1;start<size;start++){
         int key= *(ptr+start);
         int j=start-1;
         while(*(ptr+j)>key && j>=0){
            *(ptr+j+1)=*(ptr+j);
            j=j-1;
         }
         *(ptr+j+1)=key;

    }
}
void printarray(int *ptr,int size){
    for(int j=0;j<size;j++){
        printf("%d ",*(ptr+j));
    }
    printf("\n");
}