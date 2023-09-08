#include<stdio.h>
void insertion_sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int key=*(arr+i);
        int j=i-1;
        while(*(arr+j)>key && j>=0){
            *(arr+j+1)=*(arr+j);
            j--;
        }
        *(arr+j+1)=key;
    }

}
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
int main(){
      int arr[]={5,4,3,2,1};
      insertion_sort(arr,5);
      display(arr,5);
      return 0;
}