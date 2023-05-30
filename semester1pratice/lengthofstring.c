#include<stdio.h>
#include<string.h>
int lengthofstring(char arr[]);
int main(){
    char array[10000];
    fgets(array,1000,stdin);
    int k=lengthofstring(array)-1;
    array[k]='\0';
    puts(array);
    printf("%d is the length of string\n",lengthofstring(array));
    return 0;
}
int lengthofstring(char arr[]){
    int count=0;
    for(int j=0;arr[j]!='\0';j++){
        count++;
    }
    return count;
}
