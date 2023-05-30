#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    gets(array);
    char fun;
    fun=getchar();
    int length=strlen(array);
    for(int i=0;i<length;i++){
        if(array[i]==fun){
            for(int j=i;j<length-1;j++){
                   array[j]=array[j+1];
            }
            array[length-1]='\0';
            length--;
            printf("%d is the lenght\n",length);
        }
    }
    puts(array);
    return 0;
}