#ifndef _CHARACTERS_H_
#define _CHARACTERS_H_
#include <string>

class characters
{
private:
    //attributes
    
    
public:
    //methods
    //declared inline
    
    int attacklvl,health,defendlvl,lucklvl,potionenv,money,healthlvl,maxhealth,vicdan;
    std::string name;
    //void attack(int ap,int dp, int hp);
    void playerstatsTR();
    void playerstatsEN();
    
    void playerbattlestatsTR();
    void playerbattlestatsEN();
    
    
    //methods will be declared outside the class decleration
    
    
    


};

#endif // _CHARACTERS_H_
