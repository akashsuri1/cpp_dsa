#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
typedef struct legendaryPokemon{
    pokemon normal;
    char ability[100];
}legendaryPokemon;
typedef struct godPokemon{
    legendaryPokemon legend;
    int specialattack;
}godPokemon;
int main(){
    legendaryPokemon mewtou;
    //nested members are intialized this way
    
    strcpy(mewtou.ability,"Pressure");
    mewtou.normal.hp=100;
    mewtou.normal.speed=180;
    mewtou.normal.attack=300;
    mewtou.normal.tier='S';
    strcpy(mewtou.normal.name,"mewtou");

    godPokemon arecius;

    arecius.specialattack=300;
    strcpy(arecius.legend.ability,"Turns others to stone");
    arecius.legend.normal.tier='G';
    arecius.legend.normal.attack=200;
    arecius.legend.normal.hp=150;
    arecius.legend.normal.speed=250;
    strcpy(arecius.legend.normal.name,"arecius");

    return 0;
}