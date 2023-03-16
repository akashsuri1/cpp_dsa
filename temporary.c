#include <stdio.h>
void insertionsort(int array[],int n);
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
	insertionsort(array,n);
	int flag=1;
	for(int j=0;j<n-1;j++){
	    if(array[j]==array[j+1]){
	        flag=0;
	        break;
	    }
	}
	if(flag){
	    int temp=array[1];
	    array[1]=array[0];
	    array[0]=temp;
	    printarr(array,n);
	    
	}else{
	    int treated=0;
	    for(int j=0;j<n;j++){
	        if(array[j]==array[0]){
	            treated++;
	        }
	    }
	    if(treated==n){
	        printf("-1\n");
	    }else{
	        if(array[n-2]==array[n-1]){
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
void insertionsort(int array[],int n){
    for(int start=1;start<n;start++){
        int key=array[start];
        int j=start-1;
        while(array[j]>key && j>=0){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}
void printarr(int array[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);
    }
    printf("\n");
}