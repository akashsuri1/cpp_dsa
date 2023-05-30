#include<stdio.h>
#include<string.h>
void stringcompare(char array[],char array2[]);
int main(){
     char array[1000],array2[1000];
     fgets(array,1000,stdin);
     array[strlen(array)-1]='\0';
     fgets(array2,1000,stdin);
     array2[strlen(array2)-1]='\0';  
     stringcompare(array,array2);
     return 0;   
}
void stringcompare(char array[],char array2[]){
    int flag=1;
    int i=0;
    int max;
    (strlen(array)>strlen(array2))?(max=strlen(array)):(max=strlen(array2));
    while(i<max){
        if(array[i]!=array2[i]){
            if(array[i]>array2[i]){
                printf("string 1 is greater\n");
            }else{
                printf("string 2 is greater\n");
            }
            flag=0;
            break;
        }
        if(array[i]=='\0'){
            printf("string2 is greater\n");
            flag=0;
            break;
        }
        if(array2[i]=='\0'){
            printf("string1 is greater\n");
            flag=0;
            break;
        }
        i++;
    }
    if(flag){
        printf("string are equal\n");
    }
}