#include<stdio.h>
int compare(char array1[],char array2[]);
int main(){
    char array1[1000],array2[1000];
    gets(array1);
    gets(array2);
    int result=compare(array1,array2);
    if(result>0){
        printf("string 1 is greater\n");
    }else if(result==0){
        printf("both string are equal\n");
    }else{
        printf("string 2 is greater\n");
    }
    return 0;
}
int compare(char array1[],char array2[]){
    int i=0;
    while(array1[i]==array2[i]){
        if(array1[i]=='\0'||array2[i]=='\0'){
            break;
        }
        i++;
    }
    return array1[i]-array2[i];
}

