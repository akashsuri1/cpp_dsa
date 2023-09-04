#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;
void check(date d1,date d2){
    bool flag=true;
    if(d1.day!=d2.day){
        flag=false;
    }
    if(d1.month!=d2.month){
        flag=false;
    }
    if(d1.year!=d2.year){
        flag=false;
    }
    if(flag){
        printf("The date are same\n");
    }else{
        printf("The dates are different\n");
    }
}
int main(){
    date a,b,c;
    a.day=11;
    a.month=9;
    a.year=2003;
    b.day=10;
    b.month=1;
    b.year=2003;
    c=b;
    check(a,b);
    check(b,c);
    return 0;
}