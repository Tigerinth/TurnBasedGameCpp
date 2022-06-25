#include "enemy.h"
#include "characters.h"
#include <iostream>
using namespace std;
void enemy::eattack(int eap,int edp,int ehp) {
    ehealth = ehp;
    eattacklvl = eap;
    edefendlvl = edp;
    
}
void enemy::enemygraphics(int lvl){
    
    switch (lvl){
    
    case 1:
    if(ehealth > 5) {
        cout << "       ########    " << endl;
        cout << "       ###O##O#    " << endl;
        cout << "       ####--##    " << endl; break;
    }else {
        cout << "         #####    " << endl;
        cout << "    #   ##o##o#    " << endl;
        cout << "   ##  ####--##  #  " << endl; break;
    }
        
        
    case 2:
    if(ehealth > 15){
        cout << "       #------#    " << endl;
        cout << "       #--oo--#    " << endl;
        cout << "       #______#    " << endl; break;
    }else{
        
        cout << "       #------     " << endl;
        cout << "        --o --#    " << endl;
        cout << "   #   #___o__# #  " << endl; break;
    }
        
    case 3:
    if(ehealth > 10){
        cout << "       ---------   " << endl;
        cout << "       |2345678|   " << endl;
        cout << "       ---------   " << endl; break;
    }else{
        cout << "       ---------   " << endl;
        cout << "       |0000000|   " << endl;
        cout << "       ---------   " << endl; break;
    }
        
        
    case 4:
            
            
        cout << "           __________      " << endl;
        cout << "           |  oooo  |      " << endl;
        cout << "      ~~|__|___!!___|__|~~ " << endl << endl; break;
        
    case 5:
        /*ehealth    = 150;
        edefendlvl = 2;
        eattacklvl = 2;
        elucklvl   = 1;*/
        cout << "   ############ " << endl;
        cout << "   ####ooo##### " << endl;
        cout << "   ------------ " << endl << endl; break;
        
    case 6:
            
            
        cout << "           ____________     " << endl;
        cout << "           | +-%--%-+ |     " << endl;
        cout << "         ~~############~~   " << endl;
        cout << "         ~~############~~   " << endl << endl; break;
        
    case 7:
        
        cout << "          #####             " << endl;
        cout << "        ####8####           " << endl;
        cout << "      #############         " << endl << endl; break;
        
    case 100:
        cout << "....... .::::::::..... ......." << endl;
        cout << " ......~7~!7?777777?77!^......" << endl;
        cout << ".... .7!.~77!~!!:.~~~!~!? ...." << endl;
        cout << "....^JY~^?~:PP:~!^7:!5!^5?:..." << endl;
        cout << ".. !J??YY?~~!!7?::Y?!77!7Y7 .." << endl;
        cout << ".. ~JJ!J5?Y!!75?!^5Y!~J5^5~ .." << endl;
        cout << "... ^J~.&@@B5GJ7YJR?Y53#7! ..." << endl;
        cout << ".... .?!5&&@@@@&@&@&@@@@J~ ..." << endl;
        cout << ".......^7Y5YJB#&@@@@@@@@J7 ..." << endl;
        cout << "........ ^??7Y~~5755GGGP6? ..." << endl;
        cout << "......... .^~!7!7!7???7~7:...." << endl;
        cout << ".....................:.. ....." << endl << endl; break;
    
    }
}

void enemy::enemystatsTR() {
    //cout << endl ;
    cout << "-Dusman-" << endl;
    cout << "saglik: " << ehealth;
    cout << " | Zirh: " << edefendlvl << endl;
    cout << "Kuvvet: " << eattacklvl;
    cout << " | Sans: "<< elucklvl << endl<<endl;
}
void enemy::enemystatsEN() {
    //cout << endl ;
    cout << "-Enemy-" << endl;
    cout << "Health: " << ehealth;
    cout << " | Armor: " << edefendlvl << endl;
    cout << "Power: " << eattacklvl;
    cout << " | Luck: "<< elucklvl << endl<< endl;
}

void enemy::enemy2graphics(){
    
}
