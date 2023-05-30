#include <stdio.h>
#include<string.h>
int one_counter(char array[]);
void rightsort(char array[]);
void leftsort(char array[]);
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    char array[500010];
	    char array2[500010];
	    scanf("%s",array);
	    scanf("%s",array2);
	    if(one_counter(array)>one_counter(array2)){
	         rightsort(array2);
	         leftsort(array);
	    }else{
	         rightsort(array);
	         leftsort(array2);
	    }
	    for(int j=0;array[j]!='\0';j++){
	        if(array[j]!=array2[j]){
	            array[j]='1';
	        }
	    }
	    printf("%s\n",array);
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
void rightsort(char array[]){
    for(int j=0;j<strlen(array)-1;j++){
        int swap=0;
        for(int k=0;k<strlen(array)-1-j;k++){
            if(array[k]>array[k+1]){
                int temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp;
                swap++;
            }
        }
        if(swap==0){
            break;
        }
    }
}
void leftsort(char array[]){
    for(int j=0;j<strlen(array)-1;j++){
        int swap=0;
        for(int k=0;k<strlen(array)-1-j;k++){
            if(array[k]<array[k+1]){
                int temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp;
                swap++;
            }
        }
        if(swap==0){
            break;
        }
    }
}
