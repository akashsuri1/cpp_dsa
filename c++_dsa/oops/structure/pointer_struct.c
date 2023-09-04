#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[10];
}pokemon;
int main(){
    pokemon pikachu;
    
    pikachu.attack=10;
    pikachu.speed=100;
    pikachu.hp=200;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");

    pokemon* x=&pikachu;

    printf("%p\n",x);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.name);

    return 0;



}
