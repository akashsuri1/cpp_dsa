#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[100];
}pokemon;
void change(pokemon pk){
    pk.speed=170;
    pk.attack=150;
    pk.hp=200;
    pk.tier='S';
}
int main(){
    
    pokemon pikachu;
    
    pikachu.hp=80;
    pikachu.speed=80;
    pikachu.attack=100;
    pikachu.tier='B';
    strcpy(pikachu.name,"pikachu");

    change(pikachu);

    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);    
       
    return 0;

}