#include<stdio.h>
#include<strings.h>
int lastoccurence(char array[],char find);
int firstoccurence(char array[],char find);
int main(){
    char array[1000];
    gets(array);
    char x;
    scanf("%c",&x);
    int ocuurence=-1;
    int count=0;
    for(int i=0;array[i]!='\0';i++){
           if(array[i]==x){
               ocuurence=i;
               printf("%d is the occurnce\n",i);
               count++;
           }
    }
    printf("%d is the first occurence\n",firstoccurence(array,x));
    printf("%d is the last occurence\n",lastoccurence(array,x));
    printf("%d is the count\n",count);
    return 0;
}
int lastoccurence(char array[],char find){
    for(int j=strlen(array)-1;j>=0;j--){
        if(array[j]==find){
            return j;
        }
    }
    return -1;
}
int firstoccurence(char array[],char find){
    for(int j=0;array[j]!='\0';j++){
        if(array[j]==find){
            return j;
        }
    }
    return -1;
}