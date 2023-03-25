// #include<stdio.h>
// int main(){
//     int age=10;
//     int* ptr=&age;
//     int _age=*ptr;
//     printf("%d\n",_age);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int *ptrage;
//     char *starptr;
//     float *ptrprice;
//     int age=19;
//     char star='*';
//     float price=100.00;
//     ptrage=&age;
//     starptr=&star;
//     ptrprice=&price;
//     printf("%d %c %f\n",*ptrage,*starptr,*ptrprice);
//     return 0;
// }
//..function returning a value of integer pointer
// #include<stdio.h>
// int* set(){
//     static int a=6;
//     a+=6;
//     return (&a);

// }
// int main(){
//     int *ptr;
//     ptr=set();
//     printf("%d\n",*ptr);
//     set();
//     printf("%d\n",*ptr);
//     return 0;
// }
// #include<stdio.h>
// int a;
// void maiwn();
// int main(){
//     printf("%d\n",a);
   
//     int a=4;
//     // b=9;
//     maiwn();
//     printf("%d\n",a);
//     maiwn();
//     return 0;
// }
// void maiwn(){

//     printf("%d\n",a);
//     a+=7;
// }
// #include<stdio.h>
// void externed();
// int a=0;
// int main(){
//     externed();
//     printf("%d",a);
//     return 0;
// }
// void externed(){
//     extern int a;
//     printf("%d",a);
//     a+=7;
//     return;
// }
// extern is used to tell that the scope of the variable is outside the block
// #include<stdio.h>
// // int x=0;
// void conceptclear(){
//     int x=20;
//     printf("%d\n",x);
//     {
//        extern int x;
//        printf("%d",x);
//     }
//     printf("%d\n",x);
// }
// int main(){
//     conceptclear();
//     return 0;
// }
// #include<stdio.h>
// int fun(int a,int b){
//     printf("%d",a+b);
//     return a+b;
// }
// int main(){
//     int (*funcptr)(int,int)=fun;
//     funcptr(10,20);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1,4,3,4,5};
//     int *p=arr;
//     printf("%d\n",sizeof(void *));
//     *p++=2;;
//     printf("%d\n",*++p);
//     printf("%d\n",arr[0]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char *s[4]={"black","white","pink","voilet"};
//     printf("%d",sizeof(void **));
//     return 0;
// }
// #include<stdio.h>

// int main()
// {
//     char ch=74;
//     printf("%c\n",ch);
// }
// #include<stdio.h>

// int main()
// {
//     void *vp;
//     char ch=74, *cp="JACK";
//     int j=65;
//     vp=&ch;
//     printf("%c\n", *(char*)vp);
//     vp=&j;
//     printf("%c\n", *(int*)vp);
//     vp=cp;
//     printf("%s\n", (char*)vp+2);
//     return 0;
// }
// .
// What will be the output of the program?
// #include<stdio.h>

// int main()
// {
//     int arr[2][2][2] = {10, 2, 3, 4, 5, 6, 7, 8};
//     int *p, *q;
//     p = &arr[1][1][1];
//     q = ((int *) (arr)+1);
//     printf("%d, %d\n", *p, *q);
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[]={1,2,3};
    printf("%p %p\n",arr,&arr+1);
}