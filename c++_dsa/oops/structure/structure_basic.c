#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    }pikachu,charizard,metou;
    printf("Enter pikachu health\n");
    scanf("%d",&pikachu.hp);
    pikachu.attack=80;
    pikachu.speed=100;
    pikachu.tier='A';
    
    charizard.hp=100;
    charizard.attack=200;
    charizard.speed=80;
    charizard.tier='S';
    
    metou.hp=200;
    metou.attack=300;
    metou.speed=200;
    metou.tier='G';
    
    printf("Pikachu hp : %d \n",pikachu.hp);
    return 0;
}