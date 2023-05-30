#include<stdio.h>
#include<strings.h>
void reversearray(char array[],int s,int end);
int main(){
    char array[1000];
    gets(array);
    int s=-1;
    int end;
    for(int j=0;array[j]!='\0';j++){
        if(array[j]==' '){
            end=j;
            printf("%d\n",end);
            reversearray(array,s+1,end-1);
            puts(array);
            s=end;
        }
        if(array[j+1]=='\0'){
            reversearray(array,s+1,j);
            puts(array);
        }
    }
    strrev(array);
    puts(array);
    return 0;
}
void reversearray(char array[],int s,int end){
    int n=(s+end)/2;
    for(int j=s;j<=n;j++){
         char temp=array[j];
         array[j]=array[end];
         array[end--]=temp;   
    }
}