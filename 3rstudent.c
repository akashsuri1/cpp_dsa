#include<stdio.h>
void inputarray(int arr[],int n);
float average(int arr[],int n);
float sum(int arr[],int n);
int main(){
    int st1[3],st2[3],st3[3];
    printf("enter the marks of the 1st student: \n");
    inputarray(st1,3);
    printf("enter the marks of the 2nd student: \n");
    inputarray(st2,3);
    printf("enter the marks of the 3rd student: \n");
    inputarray(st3,3);
    printf("average of 1st subject: %f\n",1.0*(st1[0]+st2[0]+st3[0])/3);
    printf("average of 2nd subject: %f\n",1.0*(st1[1]+st2[1]+st3[1])/3);
    printf("average of 3rd subject: %f\n",1.0*(st1[2]+st2[2]+st3[2])/3);
    printf("average of 1st student: %f\n",average(st1,3));
    printf("average of 2nd student: %f\n",average(st2,3));
    printf("average of 3rd student: %f\n",average(st3,3));
    printf("overall average of student: %f\n",(sum(st1,3)+sum(st2,3)+sum(st3,3))/9);
    return 0;

}
void inputarray(int arr[],int n){
    for(int j=0;j<n;j++){
        printf("enter the marks of subject %d : ",j+1);
        scanf("%d",&arr[j]);
    }
}
float average(int arr[],int n){
    float sum=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    printf("%f is the average\n",sum);
    return sum*1.0/n;
}
float sum(int arr[],int n){
    float sum=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    return sum;
}