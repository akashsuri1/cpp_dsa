#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    gets(array);
    puts(array);
    int index=0;
    for(int i=0;array[i]!='\0';i++){
        if(array[i]!=' '&& array[i]!='\t'&&array[i]!='\n'){
            index=i;
            break;
        }
    }
    if(index!=0){
        int end=strlen(array);
        for(int i=0;i<end-index;i++){
            array[i]=array[i+index];
        }
        array[end-index]='\0';
    }
    puts(array);
}