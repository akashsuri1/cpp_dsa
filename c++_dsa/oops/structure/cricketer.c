#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int noOfMatches;
        float average;
    }cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        fgets(arr[i].name,20,stdin);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].average);
        if(i==2){
            continue;
        }
        getchar();

    }
    for(int i=0;i<3;i++){
        printf("Name : %s",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("No of Matches : %d\n",arr[i].noOfMatches);
        printf("Average : %.2f\n\n",arr[i].average);
    }
    return 0;
}