#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int max(int number,...){
    int max=INT_MIN;
    va_list ans;
    va_start(ans,number);
    for(int i=0;i<number;i++){
        int num=va_arg(ans,int);
        max=fmax(max,num);
    }
    va_end(ans);
    return max;
}
int main(){
    printf("%d\n",max(5,1,2,3,4,5));
    printf("%d\n",max(6,4,5,100,2,1,5));
    return 0;

}