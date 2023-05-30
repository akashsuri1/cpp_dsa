#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int array[n],count[n+1];
	    for(int j=0;j<n;j++){
	        scanf("%d",&array[j]);
	        count[j]=0;
	    }
	    count[n]=0;
	    for(int j=0;j<n;j++){
	        count[array[j]]++;
	    }
	    int counter=0;
        for(int j=0;j<n;j++){
            printf()
        }
	    for(int j=1;j<n+1;j++){
	        if(count[j]>=k && array[j-1]!=j){
	            counter++;
	        }
	    }
	    printf("%d\n",counter);
	    
	    
	}
	return 0;
}