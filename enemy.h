#ifndef _ENEMY_H_
#define _ENEMY_H_
#include <string>
#include <iostream>

class enemy
{
public:
    int ehealth,edefendlvl,eattacklvl,elucklvl,merhamet;
    
    void eattack(int eap,int edp, int ehp);
    void enemygraphics(int lvl);
    void enemy2graphics();
    void enemystatsTR();
    void enemystatsEN();
    
};

#endif // _ENEMY_H_
