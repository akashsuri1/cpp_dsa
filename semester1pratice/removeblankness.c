#include<stdio.h>
int main(){
    char array[1000];
    gets(array);
    char result[1000];
    int i=0,j=0;
    while(array[i]!='\0'){
        if(array[i]==' '){
            result[j]=' ';
            j++;
            while(array[i]==' '){
                i++;
            }
        }
        result[j]=array[i];
        i++;
        j++;
    }
    result[j]='\0';
    puts(result);
    return 0;
}