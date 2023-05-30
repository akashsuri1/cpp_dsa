#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    char array[1000];
    gets(array);
    int array2[26];
    for(int i=0;i<26;i++){
        array2[i]=0;
    }
    strlwr(array);
    puts(array);
    for(int i=0;array[i]!='\0';i++){
        if(array[i]>='a' && array[i]<='z'){
               array2[array[i]-'a']++;
        }
    }
    int max,min;
    max=min=0;
    for(int j=0;j<26;j++){
        if(array2[j]!=0){
            
           if(array2[max]==0||array2[j]>array2[max]){
                max=j;
           }
          if(array2[min]==0||array2[j]<array2[min]){
            min=j;
           }
        } 
    }
    printf("max=%c\nmin=%c\n",max+'a',min+'a');
    return 0;
}