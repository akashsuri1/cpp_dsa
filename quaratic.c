#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of the array : ");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    int min,max;
    min=max=array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("max=%d and min=%d\nsum=%d\n",max,min,sum);
    return 0;
    


}