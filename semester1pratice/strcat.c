#include<stdio.h>
#include<string.h>
void cat(char array[],char array2[]);
int main(){
    char array1[1000],array2[1000];
    fgets(array1,1000,stdin);
    array1[strlen(array1)-1]='\0';
    fgets(array2,1000,stdin);
    array2[strlen(array2)-1]='\0';
    puts(array1);
    cat(array1,array2);
    puts(array1);
    return 0;
}
void cat(char array[],char array2[]){
      int i=0;
      for(int j=0;array[j]!='\0';j++){
           i++;
      }
      for(int k=0;array2[k]!='\0';k++){
          array[i]=array2[k];
          i++;
      }
      array[i]='\0';
}