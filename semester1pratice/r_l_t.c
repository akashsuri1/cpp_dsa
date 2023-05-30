#include<stdio.h>
#include<string.h>
void lead(char array[]);
void trail(char array[]);
int main(){
    char array[1000];
    fgets(array,1000,stdin);
    array[strlen(array)-1]='\0';
    puts(array);
    lead(array);
    trail(array);
    puts(array);
    return 0;
}
void lead(char array[]){
    int index=-1;
    for(int j=0;array[j]!='\0';j++){
        if(array[j]!='\0'&& array[j]!='\n' && array[j]!='\t'&&array[j]!=' '){
            printf("found at %d\n",j); 
            index=j;
            break;
        }
    }
    if(index>0){
        int i=0;
        while(array[i+index]!='\0'){
            array[i]=array[i+index];
            i++;
        }
        array[i+index]='\0';
        puts(array);
    }
}
void trail(char array[]){
    int trail=strlen(array);
    for(int j=trail-1;j>=0;j--){
        if(array[j]!='\n'&& array[j]!='\t'&&array[j]!=' '){
            array[j+1]='\0';
            return;
        }
    }
}