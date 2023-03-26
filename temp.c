#include <stdio.h>
#include<string.h>
void input(int arr[],int n){
    for(int j=0;j<n;j++){
	        scanf("%d",&arr[j]);
	    }
}
void print(int arr[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n+1],b[n+1];
	    input(a,n);
        input(b,n);
        print(a,n);
        print(b,n);
        
	    int count0=0,count1=0;
	    for(int j=0;j<n;j++){
	        if(a[j]==0){
	            count0++;
	        }else{
	            count1++;
	        }
	    }
        printf("%d %d\n",count0,count1);
	    int flag=1;
	    for(int j=0;j<n;j++){
	        if(a[j]==1){
                printf("i \n");
	            if(a[j]!=b[j]){
                    printf("out\n");
	                flag=0;
	                printf("NO\n");
	                break;
	            }
	        }else{
	            if(a[j]!=b[j]){
	                if(count1<1){
	                    flag=0;
	                    printf("NO\n");
	                    break;
	                }
	            }
	        }
	    }
	    if(flag){
	        printf("YES\n");
	    }
	}
	return 0;
}

