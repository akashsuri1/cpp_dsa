#include<stdio.h>
#include<strings.h>
void firstoccurence(char array[],char tofind,char toreplace);
void lastoccurence(char array[],char tofind,char toreplace);
void alloccurence(char array[],char tofind,char toreplace);
int main(){
    char array[1000];
    gets(array);
    char tofind;
    tofind=getchar();
    getchar();
    char toreplace;
    toreplace=getchar();
    firstoccurence(array,tofind,toreplace);
    puts(array);
    lastoccurence(array,tofind,toreplace);
    puts(array);
    alloccurence(array,tofind,toreplace);
    puts(array);
    return 0;
}
void firstoccurence(char array[],char tofind,char toreplace){
    for(int j=0;array[j]!='\0';j++){
        if(array[j]==tofind){
            array[j]=toreplace;
            break; 
        }
    }
}
void lastoccurence(char array[],char tofind,char toreplace){
    for(int j=strlen(array)-1;j>=0;j--){
        if(array[j]==tofind){
            array[j]=toreplace;
            break;
        }
    }
}
void alloccurence(char array[],char tofind,char toreplace){
    for(int j=0;array[j]!='\0';j++){
        if(array[j]==tofind){
            array[j]=toreplace;
        }
    }
}