#include<stdio.h>
#include<strings.h>
int main(){
    char array[1000];
    gets(array);
    char word[1000];
    gets(word);
    int t=strlen(word);
    printf("%d is the t\n",t);
    int start=-1;
    int end;
    for(int j=0;array[j]!='\0';j++){
        if(array[j]==' '||array[j+1]=='\0'){
            end=j;
            printf("%d is the end\n",end);
            if((end-start-1)==t){
                printf("INT this now\n");
                int flag=1;

                for(int j=0;j<t;j++){
                    if(array[start+1+j]!=word[j]){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    printf("%d-%d\n",start+1,end-1);
                    break;
                }
            }
            start=end;
        }
    }
    return 0;
}