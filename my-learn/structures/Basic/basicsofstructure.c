#include<stdio.h>

int main(){
    struct pokemon{ // user defined datatype
        int hp;
        int speed;
        int attack; 
        char tier; // S,A,B,C,D
    } pikachu,charizard; // defining attributes

    // struct pokemon pikachu; // defining attributes
    printf("Enter attack of pikachu : ");
    scanf("%d",&pikachu.attack);
    // pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d\n",pikachu.attack);
    
    // struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("%d",charizard.hp);


    return 0;
}