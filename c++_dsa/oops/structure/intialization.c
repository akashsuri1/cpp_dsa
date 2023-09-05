#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;
int main(){
    pokemon pikachu={70,100,150};
    pikachu.tier='s';
    strcpy(pikachu.name,"Pikachu");
    printf("Name : %s\n",pikachu.name);
    printf("Speed : %d\n",pikachu.speed);
    printf("Attack : %d\n",pikachu.attack);
    printf("Tier : %d\n",pikachu.tier);
    printf("HP : %d\n",pikachu.hp);
    return 0;
}
