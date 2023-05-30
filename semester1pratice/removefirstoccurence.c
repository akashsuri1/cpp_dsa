#include<stdio.h>
#include<string.h>
int main(){
    char array[1000];
    char word[1000];
    gets(array);
    gets(word);
    int required=strlen(array)-strlen(word);
    int index=-1;
    for(int i=0;i<=required;i++){
        if(word[0]==array[i]){
            int flag=1;
            for(int j=0;word[j]!='\0';j++){
                 if(array[i+j]!=word[j]){
                    flag=0;
                    break;
                 }
            }
            if(flag){
                index=i;
                break;
            }
        }
    }
    if(index!=-1){
        int k=strlen(word);
         for(int j=index;j<required-1;j++){
            array[j]=array[j+k+1];
         }
         printf("%d\n",required-1);
         array[required-1]='\0';
         puts(array);
         printf("%d\n",strlen(array));
    }
    return 0;
}