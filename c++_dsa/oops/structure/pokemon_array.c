#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    //array declared
    pokemon array[3];
    //continous allocation of pokemon struct take place
    array[0].hp=100;
    array[0].speed=130;
    array[0].attack=200;
    array[0].tier='A';
    strcpy(array[0].name,"Charizard");
    
    array[1].hp=200;
    array[1].speed=170;
    array[1].attack=350;
    array[1].tier='G';
    strcpy(array[1].name,"meotu");
    
    array[2].hp=80;
    array[2].speed=100;
    array[2].attack=80;
    array[2].tier='B';
    strcpy(array[2].name,"Pikachu");

    //accesing array structure using dot operator

    for(int i=0;i<3;i++){
        printf("Name : %s\n",array[i].name);
        printf("Health : %d\n",array[i].hp);
        printf("Speed : %d\n",array[i].speed);
        printf("Attack : %d\n",array[i].attack);
        printf("Tier : %c\n\n",array[i].tier);
    }
    //printing array members

    return 0;

    

}