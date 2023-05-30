#include<stdio.h>
#include<strings.h>
void swap(char array[],int index);
int main(){
    char array[10000];
    gets(array);
    for(int i=0;array[i]!='\0';i++){
        for(int j=i+1;array[j]!='\0';j++){
               if(array[j]==array[i]&& array[j]!=' '){
                  swap(array,j);
               }
        }
    }
    puts(array);
    return 0;
}    
void swap(char array[],int index){
    int t=strlen(array);
    for(int j=index;j<t-1;j++){
        array[j]=array[j+1];
    }
    array[t-1]='\0';
}