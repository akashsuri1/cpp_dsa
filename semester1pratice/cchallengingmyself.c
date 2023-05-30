#include <stdio.h>
#include<math.h>
int main(void) {
	int t;
	scanf("%d",&t);
	for(int number=0;number<t;number++){
	    int length;
	    scanf("%d",&length);
	    char array[length+1];
	    scanf("%s",array);
	    int x=0;
	    int required=0;
	    for(int j=0;j<length;j++){
	        if(array[j]=='1'){
	            x+=pow(2,length-j-1);
	        }else if(array[j]=='0'){
	            required+=pow(2,length-j-1);                                   
	        }
	    }
        printf("%d = x and %d= required\n",x,required);
	    for(int j=1;j<=length;j++){
	        int temp=(x/pow(2,j));
            printf("%d is the temporary\n",temp);
	        if(temp==required){
	           printf("%d\n",j);
	           break;
	        }
	    }
	
	   
	}
	return 0;
}


