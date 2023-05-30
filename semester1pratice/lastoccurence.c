#include<stdio.h>
#include<string.h>
int main(){
    char array[1000];
    char words[1000];
    gets(array);
    gets(words);
    puts(array);
    puts(words);
    for(int i=strlen(array)-strlen(words);i>=0;i--){
        int flag=0;
        for(int j=0;words[j]!='\0';j++){
            if(words[j]!=array[i+j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
            break;
        }

    }
}