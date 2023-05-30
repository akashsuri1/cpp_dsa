#include <stdio.h>
#include<string.h>
int one_counter(char array[]);
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    char array[500010];
	    char array2[500010];
	    scanf("%s",array);
	    scanf("%s",array2);
	    int one=one_counter(array);
	    int one2=one_counter(array2);
	    if(one>one2){
	        if((strlen(array)-one)>=one2){
	            for(int j=0;j<one+one2;j++){
	                printf("1");
	            }
	            for(int j=0;j<(strlen(array)-one-one2);j++){
	                printf("0");
	            }
	            printf("\n");
	        }else{
	            int extra=one2-(strlen(array)-one);
	            for(int j=0;j<one+one2-extra;j++){
	                printf("1");
	            }
	            for(int j=0;j<extra;j++){
	                printf("0");
	            }
	            printf("\n");
	        }
	    }else{
	         if((strlen(array)-one2)>=one){
	            for(int j=0;j<one+one2;j++){
	                printf("1");
	            }
	            for(int j=0;j<(strlen(array)-one-one2);j++){
	                printf("0");
	            }
	            printf("\n");
	        }else{
	            int extra=one-(strlen(array)-one2);
	            for(int j=0;j<one+one2-extra;j++){
	                printf("1");
	            }
	            for(int j=0;j<extra;j++){
	                printf("0");
	            }
	            printf("\n");
	        }
	    }	    
	   
	}
	return 0;
}
int one_counter(char array[]){
    int counter=0;
    for(int j=0;array[j]!='\0';j++){
        if(array[j]=='1'){
            counter++;            
        }
    }
    return counter;
}
