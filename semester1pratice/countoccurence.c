#include<stdio.h>
int main(){
    char array[1000];
    char words[1000];
    gets(array);
    gets(words);
    int count=0;
    for(int i=0;i<strlen(array)-strlen(words);i++){
        if(array[i]==words[0]){
            int flag=0;
            for(int j=0;words[j]!='\0';j++){
                if(words[j]!=array[i+j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("%d occuence\n",i);
                count++;
            }
        }
    }
    printf("%d is the count\n",count);
    return 0;
}