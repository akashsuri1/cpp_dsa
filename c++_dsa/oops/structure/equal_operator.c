#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokemon;
void print(pokemon p){
    printf("Name : %s\n",p.name);
    printf("Hp : %d\n",p.hp);
    printf("Attack : %d\n",p.attack);
    printf("Speed : %d\n",p.speed);
    printf("Tier : %c\n\n",p.tier);
} 
int main(){
    pokemon a,b;
    a.hp=100;
    a.speed=80;
    a.attack=150;
    a.tier='S';
    strcpy(a.name,"Pikachu");
    b=a;//this means same as a.hp=b.hp for all attributes
    strcpy(b.name,"balbasur");
    print(b);
    return 0;
}