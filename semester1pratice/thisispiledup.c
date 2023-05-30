#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int dr=1;
	    while(1){
	        if(dr==1){
	            if(x>=1 && y>=1){
	                x-=1;
	                y-=1;
	            }else if(y==0 && x>=2){
	                x-=2;
                    printf("inside this condition\n");
	            }else{
	                printf("CHEFINA\n");
	                break;
	            }
	        }else{
	            if(x>=1 && y>=1){
	                x-=1;
	                y-=1;
	            }else if(x==0 && y>=2){
	                y-=2;
	            }else{
	                printf("CHEF\n");
	                break;
	            }
	        }
            printf("%d %d this is amazing\n",x,y);
	        dr=(dr+1)%2;
	    }
	}
	return 0;
}