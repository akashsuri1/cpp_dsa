#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
    int rollno;
    char name[20];
    char dept[20];
    char course[20];
    int yearOfJoining;
}student;
void check(student s1,student s2){
    if(!strcmp(s1.dept,s2.dept)){
        printf("They belong to same department\n");
    }else{
        printf("They dont belong to different department\n");
    }
    return;
}

int main(){
    
    student a,b;

    fgets(a.name,20,stdin);
    fgets(a.dept,20,stdin);
    fgets(a.course,20,stdin);
    scanf("%d",&a.yearOfJoining);

    getchar();

    fgets(b.name,20,stdin);
    fgets(b.dept,20,stdin);
    fgets(b.course,20,stdin);
    scanf("%d",&b.yearOfJoining);
    
    check(a,b);

    return 0;

}