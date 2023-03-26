#include <stdio.h>
void quicksort(int array[],int l,int h);
int partion(int array1[],int l,int h);
void swap(int *a,int *b);
void printarr(int array[],int n);
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int array[n];
	for(int j=0;j<n;j++){
	    scanf("%d",&array[j]);
	}
	quicksort(array,0,n-1);
    printarr(array,n);
	int count=1;
    int special=0;
	for(int j=0;j<n-1;j++){
	    if(array[j]!=array[j+1]){
            count++;
            special=j;
	   }
    }
    printf("%d\n",count);
	if(count==n && n>2){
	    swap(&array[1],&array[0]);
	    printarr(array,n);
	    
	}else{
	    if(count==1 || n==2){
	        printf("-1\n");
	    }else if(count==2 &&(special==0 || special==n-2)){
	        for(int j=0;j<n-1;j++){
	            if(array[j]!=array[j+1]){
	                swap(&array[j],&array[j+1]);
	                break;
	            }
	        }
	        printarr(array,n);
	    }
	    else{
	        if(array[n-2]==array[n-1] ){
	            int temp=array[0];
	            for(int j=0;j<n-1;j++){
	                array[j]=array[j+1];
	            }
	            array[n-1]=temp;
	            printarr(array,n);
	        }else{
	            int temp=array[n-1];
	            for(int j=n-1;j>0;j--){
	                array[j]=array[j-1];
	            }
	            array[0]=temp;
	            printarr(array,n);
	        }
	    }
	}
	
	}
	
	return 0;
}
int partion(int arr[],int l,int high){
    int pivot=arr[high];
    int i=l-1;
    for(int j=l;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quicksort(int arr[],int l,int high){
    if(l<high){
        int pi=partion(arr,l,high);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,high);
    }else{
        return;
    }
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printarr(int array[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);
    }
    printf("\n");
}