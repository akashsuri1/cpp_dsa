#include<stdio.h>
#include<string.h>
typedef union pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[10];
    char ability[30];
}pokemon;
int main(){
    pokemon pikachu;
    pikachu.attack=100;
    pikachu.hp=80;
    pikachu.speed=110;
    pikachu.tier='S';
    strcpy(pikachu.ability,"Flexing money and skills\n");
    strcpy(pikachu.name,"jindal");
    printf("%s\n",pikachu.name);
    printf("%c\n",pikachu.tier);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.ability);
    return 0;
}