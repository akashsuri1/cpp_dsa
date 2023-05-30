#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    char words[1000];
    gets(array);
    gets(words);
    int rt=strlen(array);
    for(int i=0;i<=rt-strlen(words);i++){
    
        if(array[i]==words[0]){
    
            int flag=1;
            for(int j=0;words[j]!='\0';j++){
                if(array[i+j]!=words[j]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                int t=strlen(words);
                for(int k=i;k<rt-t;k++){
                    array[k]=array[k+t+1];
                }
                array[rt-t]='\0';
                rt=rt-t;
                puts(array);
                i--;
            }
        }
    }
    puts(array);
    return 0;
}