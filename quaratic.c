#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=b*b-4*a*c;
    if(d>0){
        printf("root 1= %f and root 2= %f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }else if(d==0){
        printf("root 1= %f and root 2= %f \n",-b*1.0/(2*a),-b*1.0/(2*a));
    }else{
        printf("root 1= %f + i %f and root 2= %f - i %f \n",(-b*1.0/(2*a)),sqrt(-d)/(2*a),(-b*1.0/(2*a)),sqrt(-d)/(2*a));
    }   
    return 0;

}