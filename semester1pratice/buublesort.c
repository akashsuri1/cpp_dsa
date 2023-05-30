#include<stdio.h>
void swap(int *a,int *b);
void buublesort(int arr[],int n);
void input(int arr[],int n);
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    input(arr1,n1);
    input(arr2,n2);
    int arr3[n1+n2];
    int i,j,counter=0;
    i=j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[counter]=arr1[i];
            i++;
        }else{
            arr3[counter]=arr2[j];
            j++;
        }
        counter++;
    }
    while(i<n1){
        arr3[counter]=arr1[i];
        i++;
        counter++;
    }
    while(j<n2){
        arr3[counter]=arr2[j];
        j++;
        counter++;
    }
    for(int j=0;j<n1+n2;j++){
        printf("%d ",arr3[j]);
    }
    printf("\n");
    return 0;

}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void buublesort(int arr[],int n){
    int swaped;
    for(int j=0;j<n-1;j++){
        swaped=0;
        for(int k=0;k<n-1-j;k++){
            if(arr[k]>arr[k+1]){
                 swap(&arr[k],&arr[k+1]);
                 swaped++;
            }
        }
        if(swaped==0){
            return;
        }
    }
    return;
}
void input(int arr[],int n){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
}