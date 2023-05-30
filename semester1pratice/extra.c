#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int n,m,k;
	    scanf("%lld %lld %lld",&n,&m,&k);
	    int array[n][m];
	    long long int counter=1;
	    for(long long int i=0;i<n;i++){
	        for(long long int j=0;j<m;j++){
	            array[i][j]=counter;
	            counter++;
	        }
	    }
	    while(k--){
	        long long int qi,xi,vi;
	        scanf("%lld %lld %lld",&qi,&xi,&vi);
	        if(qi==0){
	            for(long long int j=0;j<m;j++){
	                array[xi-1][j]=((vi%1000000007)*(array[xi-1][j]%1000000007))%1000000007;
	            }
	        }else{
	            for(long long int j=0;j<n;j++){
                    array[j][xi-1]=((vi%1000000007)*(array[j][xi-1]%1000000007))%1000000007;
	        
	            }
	        }
	    }
        // for(int i=0;i<n;i++){
	    //     for(int j=0;j<m;j++){
	    //         printf("%lld ",array[i][j]);
	            
	    //     }
        //     printf("\n");
	    // }
	    long long int sum=0;
	     for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            sum=((sum%1000000007)+(array[i][j]%1000000007))%1000000007;
	         
	        }
	    }
	    printf("%lld\n",sum);
	}
	return 0;
}
// size of the matrix is large so we cannot do it my making matrix we have to do something different