#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int no=0;no<t;no++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x-y>=2){
            printf("CHEF\n");
        }
        if(y-x>=2){
            printf("CHEFINA\n");
        }
        if(y-x==0){
            if(y%2==0){
                printf("CHEFINA\n");
            }else{
                printf("CHEF\n");
            }
        }else{
            if(x>y){
                printf("CHEF\n");
            }else{
                printf("CHEFINA\n");
            }
        }

    }
}