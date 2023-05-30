#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    char words[1000];
    gets(array);
    gets(words);
    int required=strlen(array)-strlen(words);
    int index;
    for(int j=required;j>=0;j--){
        if(array[j]==words[0]){
            int flag=1;
            for(int i=0;array[i]!='\0';i++){
                if(array[i+j]!=words[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                index=j;
                break;
            }
        }
    }
    for(int k=index;k<required;k++){
        int l=strlen(words);
        array[k]=array[k+l+1];
    }
    array[required]='\0';
    puts(array);
    return 0;
}