#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    gets(array);
    puts(array);
    printf("%d is string lenght\n",strlen(array));
    int index;
    for(int i=strlen(array)-1;i>=0;i--){
        if(array[i]!=' '&& array[i]!='\t'&&array[i]!='\n'){
            array[i+1]='\0';
            break;
        }
    }
    puts(array);
    printf("%d is string lenght\n",strlen(array));
    return 0;
}