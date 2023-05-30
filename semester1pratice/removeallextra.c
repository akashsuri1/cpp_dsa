#include<stdio.h>
int main(){
    char array[1000];
    gets(array);
    for(int j=0;array[j]!='\0';j++){
        if(array[j]==' '||array[j]=='\t'||array[j]=='\n'){
            if(array[j+1]==' '||array[j+1]=='\t'||array[j+1]=='\0'){
                int k=j;
                while(array[k+1]!='\0'){
                        array[k]=array[k+1];
                        k++;
                }
                array[k]='\0';
                j--;
            }
        }
    }
    puts(array);
    return 0;
}