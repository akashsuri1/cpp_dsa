#include <stdio.h>
int partion(int arr[],int l,int h);
void swap(int *a,int *b);
void quicksort(int arr[],int l,int h);
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int array[n];
	    for(int j=0;j<n;j++){
	        scanf("%d",&array[j]);
	    }
	    quicksort(array,0,n-1);
	    float sum=0;
	    for(int j=k;j<n-k;j++){
	        sum+=array[j];
	    }
	    printf("%f\n",sum*1.0/(n-2*k));
	   
	}
	return 0;
}
int partion(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int pi=partion(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }else{
        return;
    }
}
