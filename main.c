#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Enemy
{
    int hp;
    int dmg;
    char class[10];
    //void (*move)(Enemy*); 
};

struct player
{
    //add different classes?
    int vision;
    int hp;
    int dmg;
};

int main()
{
    bool gogglesPickup = false;
    bool heartPickup = false;
    bool wepPickup = false;
    bool enemyFight = false;

    char inp;

    struct player player1 = {1,3,1}; //initialize player

    //randomly generate map connected with SQL

    printf("Epic Text Adventure Game (X to quit) \n");

    while(1)
    {
        //make tiles you have been on permanently lifted from the fog

        //print the map

        //print info about the room you are in, and the rooms you can see
        printf("Enter Input: (N,E,S,W) \n");
        scanf(" %c", &inp); //add try-catch here

        if(inp == 'W'||inp == 'w')
        {
            //check for wall one tile up
            //check for enemy, update bool if moving into
            //check for weapon, heart or goggles, update bool
            //update map (clear fog(? symbols) in tiles above)(reinstate fog in previous lane)
        }

        //reveal tiles around you if you pick something up
        if(gogglesPickup) player1.vision++;
        if(heartPickup) player1.hp++;
        if(wepPickup) player1.dmg++;

        //if enemy nearby, write your hearing of footsteps

        if(enemyFight)
        {
            //battle sequence
        }

        if(player1.hp<=0||inp=='X'||inp=='x')
        {
            break;
        }
        gogglesPickup = false;
        heartPickup = false;
        wepPickup = false;
    }
    printf("Game Over\n");
    return 0;
}