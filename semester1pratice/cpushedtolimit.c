#include <stdio.h>
void printarray(int array[],int n);
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int array[n];
	    int freq[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&array[i]);
	        freq[i]=-1;
	    }
	    for(int i=0;i<n;i++){
	        if(freq[i]==0){
	            continue;
	        }
	        int count=1;
	        for(int j=i+1;j<n;j++){
	            if(array[i]==array[j]){
	                count++;
	                freq[j]=0;
	            }
	        }
	        if(freq[i]==-1){
	            freq[i]=count;
	        }
	    }
	    int calc=0;
	    for(int i=0;i<n;i++){
	        if(freq[i]>0){
	            calc++;
	        }
	    }
	    int result[calc];
	    int result_check[calc];
	    for(int i=0,j=0;j<calc && i<n;i++){
	        if(freq[i]>0){
	            result[j]=freq[i];
	            result_check[j]=-1;
	            j++;
	        }
	    }
	    for(int i=0;i<calc;i++){
	        if(result_check[i]==0){
	            continue;
	        }
	        int count=1;
	        for(int j=i+1;j<calc;j++){
	            if(result[i]==result[j]){
	                count++;
	                result_check[j]=0;
	            }
	        }
	        if(result_check[i]==-1){
	            result_check[i]=count;
	        }
	    }
        int max=0,minvalue;
	    for(int i=0;i<calc;i++){
	        if(result_check[i]>max){
	            max=result_check[i];
	       }
	    }
	    int onetime=0;
	    for(int i=0;i<calc;i++){
	        if(result_check[i]==max && onetime==0){
	            minvalue=result[i];
	            onetime++;
	        }
	        if(result_check[i]==max){
	            if(minvalue>result[i]){
	                minvalue=result[i];
	            }
	        }
	    }
	    printf("%d\n",minvalue);
	    
	}
	return 0;
}
void printarray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}