#include<stdio.h>
#include<strings.h>
void recurrsive(char array[],int start,int end);
int main(){
    char array[2000];
    fgets(array,2000,stdin);
    array[strlen(array)-1]='\0';
    puts(array);
    int space=0;
    char prevchar='\0';
    for(int i=0;;i++){
        if(array[i]==' '||array[i]=='\t'||array[i]=='\n'){
            if(prevchar!=' '&& prevchar!='\t'&& prevchar!='\n' && prevchar!='\0'){
                space++;
            }
        }
        prevchar=array[i];
        if(array[i]=='\0'){
            break;
        }

    }
    printf("%d is the words\n",space);
    recurrsive(array,0,strlen(array));
    puts(array);
    return 0;
}
void recurrsive(char array[],int start,int end){
    if(start==end/2){
        return;
    }
    char temp=array[start];
    array[start]=array[end-1-start];
    array[end-1-start]=temp;
    recurrsive(array,start+1,end);
}