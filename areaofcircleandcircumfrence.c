#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float age[n];
    float *ptr;
    ptr=age;
    float max,average=0,min;
    for(int j=0;j<n;j++){
        scanf("%f",ptr+j);
        printf("%f\n",*(ptr+j));
        if(j==0){
            max=min=*(ptr);
        }
        average+=*(ptr+j);
        if(max< *(ptr+j)){
            max= *(ptr+j);
        }
        if(*(ptr+j) < min){
            min= *(ptr+j);
        }
    }
    average=average/n;
    printf("max=%f and min=%f and average=%f\n",max,min,average);
    return 0;
}