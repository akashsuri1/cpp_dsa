#include<stdio.h>
struct date{
    unsigned int day; 
    unsigned int month; 
    unsigned int year; 
};
struct date_ef{
    int day: 5;
    int month:4;
    int year;
};
int main(){
    struct date d1={10,12,2013};
    struct date_ef d2={31,12,2015};
    printf("%d\n",sizeof(d1));
    printf("%d\n",sizeof(d2));
    printf("%d / %d  / %d \n",d1.day,d1.month,d1.year);
    printf("%d / %d  / %d \n",d2.day,d2.month,d2.year);
    return 0;
}
