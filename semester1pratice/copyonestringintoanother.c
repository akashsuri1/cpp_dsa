#include<stdio.h>
void inputstring(char arr[]);
void copystring(char arr1[],char arr2[]);
int main(){
    char str1[1001],str2[1001];
    inputstring(str1);
    inputstring(str2);
    puts(str1);
    puts(str2);
    copystring(str1,str2);
    printf("%s\n%s\n",str1,str2);
    printf("%c\n",'a'-32);
    return 0;
}
void inputstring(char arr[]){
    int j=0;
    char x='a';
    while(x!='\n'){
        scanf("%c",&x);
        arr[j]=x;
        j++;
      }
    arr[j-1]='\0';
}
void copystring(char arr1[],char arr2[]){
    int j=0;
    while(arr2[j]!='\0'){
        arr1[j]=arr2[j];
        j++;
    }
    arr1[j]='\0';
}