#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[15];
        float price;
        int pages;
    }book;
    book a,b,c;
    a.price=411.5;
    a.pages=120;
    strcpy(a.name,"Secret Seven");

    b.price=300;
    b.pages=200;
    strcpy(b.name,"Famous Five");

    c.price=200.78;
    c.pages=450;
    strcpy(c.name,"Monk Mind");

    printf("Name : %s\n",a.name);
    printf("Pages : %d\n",a.pages);
    printf("Price : %f\n\n",a.price);
   
    printf("Name : %s\n",b.name);
    printf("Pages : %d\n",b.pages);
    printf("Price : %f\n\n",b.price);
   
    printf("Name : %s\n",c.name);
    printf("Pages : %d\n",c.pages);
    printf("Price : %f\n",c.price);

    return 0;
}