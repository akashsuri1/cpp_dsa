#include<stdio.h>
#include<strings.h>
void tempcopy(char array[],char source[],int start,int end);
int main(){
     char array[1000];
     char result[1000]="";
     gets(array);
     int k=strlen(array);
     int start;
     int end=k;
     char temp[1000];
     for(int i=k-1;i>=0;i--){
        if(array[i]==' '){
            start=i;
            if(end-start>=1){
            tempcopy(temp,array,start+1,end-1);
            strcat(result,temp);
            strcat(result," ");
            end=start;
            }
        }
        if(i==0 && array[i]!=' '){
            tempcopy(temp,array,0,end-1);
            strcat(result,temp);
        }
     }
     puts(result);
     return 0;    

}
void tempcopy(char array[],char source[],int start,int end){
    int temp=0;    
    for(int k=start;k<=end;k++){
        array[temp]=source[k];
        temp++;
    }
    array[temp]='\0';
}