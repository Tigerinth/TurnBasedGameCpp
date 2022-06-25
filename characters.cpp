#include "characters.h"
#include "enemy.h"
#include <iostream>
#include <string>

using namespace std;
void characters::playerstatsTR(){ 
    
    cout << "---" << name << "---"<<endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "mevcut saglik: " << health << endl;
    cout << "saglik seviyesi: " << healthlvl << endl;
    cout << "Kuvvet: " << attacklvl << endl;
    cout << "Zirh: " << defendlvl << endl;
    cout << "Sans: "<< lucklvl << endl;
    cout << "-----Envanter-----" << endl;
    cout << "Altin: " << money << endl;
    cout << "iksir:" << potionenv << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    
}
void characters::playerstatsEN(){
    
    cout << "---" << name << "---"<<endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Current Health: " << health << endl;
    cout << "Health level: " << healthlvl << endl;
    cout << "Power: " << attacklvl << endl;
    cout << "Armor: " << defendlvl << endl;
    cout << "Luck: "<< lucklvl << endl;
    cout << "-----Inventory-----" << endl;
    cout << "Gold: " << money << endl;
    cout << "medkit:" << potionenv << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

    
void characters::playerbattlestatsTR() {
    cout << "---" << name << "---"<<endl;
    cout << "mevcut saglik: " << health << " / " << maxhealth << endl;
    cout << "medkit:" << potionenv << endl;
}
void characters::playerbattlestatsEN() {
    cout << "---" << name << "---"<<endl;
    cout << "Current Health: " << health << " / " << maxhealth << endl;
    cout << "medkit:" << potionenv << endl;
}
