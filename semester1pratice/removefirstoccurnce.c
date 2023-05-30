#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    fgets(array,1000,stdin);
    int k=strlen(array)-1;
    array[k]='\0';
    int index;
    char find=getchar();
    for(int j=k-1;j>=0;j--){
        if(array[j]==find){
            index=j;
            break;
        }
    }
    for(int j=index;j<k-1;j++){
        array[j]=array[j+1];
    }
    array[k-1]='\0';
    puts(array);
    return 0;
}