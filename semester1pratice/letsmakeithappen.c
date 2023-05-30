#include <stdio.h>
void arrayinput(int arr[],int n);
void bubblesort(int arr[],int s,int end);
void swap(int *a,int *b);
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,s;
        scanf("%d %d",&n,&s);
        int array[n];
        int arrayp[n];
        arrayinput(array,n);
        arrayinput(arrayp,n);
        if(s==100 ||n==1){
            printf("-1\n");
        }
        int zero=0;
        for(int j=0;j<n;j++){
            if(arrayp[j]==0){
                zero++;
            }
        }
        if(zero==n || zero==0){
            printf("-1\n");
            return 0;
        }
        for(int j=0;j<n-1;j++){
            int swaped=0;
            for(int k=0;k<n-1-j;k++){
                if(arrayp[k]>arrayp[k+1]){
                    swap(&array[k],&array[k+1]);
                    swap(&arrayp[k],&arrayp[k+1]);
                    swaped++;
                }                          
            }
            if(swaped==0){
                break;
            }
        }
        for(int j=0;j<n;j++){
            printf("%d ",array[j]);
        }
        printf("\n");
        bubblesort(array,0,zero-1);
        bubblesort(array,zero,n-1);
        for(int j=0;j<n;j++){
            printf("%d ",array[j]);
        }
        printf("\n");
        if(array[0]+array[zero]+s<=100){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        
    }
	return 0;
}
void arrayinput(int arr[],int n){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
}
void bubblesort(int arr[],int s,int end){
    for(int j=0;j<end-s;j++){
        int swapr=0;
        for(int k=s;k<end-j;k++){
            if(arr[k]>arr[k+1]){
                swap(&arr[k],&arr[k+1]);
                swapr++;
            }
        }
        if(swapr==0){
            return;
        }
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}