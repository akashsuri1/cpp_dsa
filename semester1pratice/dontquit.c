#include <stdio.h>
#include<string.h>
int main(void) {
	int t;
	scanf("%d",&t);
    getchar();
	while(t--){
	   char array[100];
	   fgets(array,101,stdin);
	   int k=strlen(array)-1;
       char array22[k+1];
	   int l=0;
	   for(int j=0;j<k-1;j++){
	       if(array[j]!=array[j+1]){
	           array22[l]=array[j];
               l++;
            }
	       if(j==k-2){
	          array22[l]=array[j+1];
	       }
	    }
	    int u,d;
	    u=d=0;
        for(int j=0;j<=l;j++){
	        if(array22[j]=='U'){
	            u++;
	        }else{
	            d++;
	        }
	    }
	     (u>d)?(printf("%d\n",d)):(printf("%d\n",u));
	   }
	 return 0;
}