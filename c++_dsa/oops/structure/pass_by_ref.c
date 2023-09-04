#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[10];
}pokemon;
void print_pokemon(pokemon p){
    printf("%d\n",p.hp);
    printf("%d\n",p.attack);
    printf("%d\n",p.speed);
    printf("%c\n",p.tier);
    printf("%s\n",p.name);
}
void change(pokemon* p){
    p->hp=110;
    p->speed=200;
    p->attack=170;
    p->tier='S';
    strcpy(p->name,"Raichu");
}
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=100;
    pikachu.speed=80;
    pikachu.tier='B';
    strcpy(pikachu.name,"Pikachu");
    print_pokemon(pikachu);
    change(&pikachu);
    print_pokemon(pikachu);
    return 0;
}