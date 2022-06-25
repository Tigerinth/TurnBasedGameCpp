#include "Localization.h"
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;
void Localization::mainmenuEN(){
    cout << "--ConsoleGameTest--\n\n~~MainMenu~~"<<endl << endl;
    cout << "   B:Start" << endl;
    cout << "   K:Create Save Game " << endl;
    cout << "   L:Load Game" << endl;
    cout << "   S:Player Statics" << endl;
    cout << "   C:Credits" << endl;
    cout << "   E:Exit" << endl;
    cout << ">> ";
}
void Localization::mainmanuTR(){
    cout << "--KonsolOyunuTest--\n\n~~AnaMenu~~"<<endl << endl;
    cout << "   B:baslat" << endl;
    cout << "   K:kayit dosyasi olustur " << endl;
    cout << "   L:var olan kayit dosyasini yukle" << endl;
    cout << "   S:istatisikler" << endl;
    cout << "   C:emegi gecenler" << endl;
    cout << "   E:cikis" << endl;
    cout << ">> ";
}
void Localization::badendTR(){
        cout << "Acimasizliginizdan ve gaddarliginizdan dolayi butun yaratiklar" << endl;
        cout << "birlik olup sizi yok etmeye geliyor ve hepsi tek bir vucut oldular artik kacamazssiniz..." << endl;
}
void Localization::badendEN(){
        cout << "Because of your ruthless League and your ferocity," << endl;
        cout << "all creatures are coming together to destroy you and they have all become one body," << endl;
        cout << "and you can no longer escape..." << endl;
}
void Localization::neutralendTR(){
        cout << "Mucadelelerin ardindan cikis yolunu buldunuz ve kacarak uzaklastiniz" << endl;
        Sleep(1000);
        cout << "Oyunu bitirdiniz tebrikler !" << endl;
        cout << "Son: notr" << endl;
}
void Localization::neutralendEN(){
        cout << "After the struggles, you found your way out and escaped." << endl;
        Sleep(1000);
        cout << "You finish the game congratulations ! " << endl;
        cout << "Ending: Neutral" << endl;
}
void Localization::marketEN(int moneyen){
    
            cout << "\n*************\n";
            cout << "-----Market----- ";
            cout << "\n*************\n";
            cout << "You have "<< moneyen << " gold"<<endl;
            cout << "1: Power stone: for upgrade your power skill level (300 gold)" << endl;
            cout << "2: Armor: you get better quality armor, your armor level is increased by 1 (350 gold) " << endl;
            cout << "3: Health: Increases your health by 1 level (300 gold)" << endl;
            cout << "4: luck necklace: Increases your luck level by 1 (400 gold) " << endl;
            cout << "5: Health potion: your health is increased by 50 points (can be used in mid-battle) (200 gold)" << endl;
            cout << "0: Leave Market." << endl;
            
            cout << "Your choose: ";
}
void Localization::marketTR(int moneytr){
    
            cout << "\n*************\n";
            cout << "-----Market----- ";
            cout << "\n*************\n";
            cout << "Sahip oldugunuz altin = "<<moneytr<<endl;
            cout << "1: Kuvvet Tasi: kuvvet seviyenizi arttirir (300 altin)" << endl;
            cout << "2: Zirh: daha kaliteli zirha sahip olursunuz zirh seviyeniz 1 artar (350 altin) " << endl;
            cout << "3: saglik: saglik seviyenizi arttirir (300 altin)" << endl;
            cout << "4: sans tilsimi: sans rutbenizi arttirir (400 altin) " << endl;
            cout << "5: saglik iksiri: sagliniz 50 puan artar (muharebe ortasinda kullanilablir) (200 altin)" << endl;
            cout << "0: Marketten ayril." << endl;
            
            cout << "karariniz: ";
}
void Localization::helpEN(){
        cout << "type 'attack' if you want attack... " << endl;
        cout << "type 'stats' for check your statics..." << endl;
        cout << "type 'pot' or 'potion' for drink a potion..." << endl;
        cout << "for exit to main menu type 'quit' or 'q'" << endl;
        cout << "Not everyone can be so bad. You can try to talk with type 'talk' " << endl;
    
}
void Localization::helpTR(){
        cout << "saldirmak icin 'attack' yaziniz... " << endl;
        cout << "kendini kontrol etmek icin 'stats' yaziniz..." << endl;
        cout << "iksir kullanmak icin 'pot' veya 'potion' yaziniz..." << endl;
        cout << "Ana menuye gitmek icin 'quit' veya 'q' yaziniz..." << endl;
        cout << "Herkes cok kotu olmayabilir. Konusmayi deneyebilirsiniz.'talk' yazin..." << endl;
}

void Localization::talkwinTR(int bountytr){
        cout << "artik savasmaktan vazgecti dusman muharebeyi terketti kazandiniz !" << endl;
        cout << "Ayriyetten "<< bountytr <<" altin kazandiniz ! tebrikler !" << endl;
}
void Localization::talkwinEN(int bountyen){
        cout << "The enemy has left the battle now , you have won !" << endl;
        cout << "Also "<< bountyen <<" gold earned ! congratulations !" << endl;
}
void Localization::goodendingTR(){
        cout << "Merhametiniz sayesinde naminiz yayildi"<< endl;
        cout << "Artik canavarlar size savasmiyor sizi dost olarak goruyorlar" << endl; 
        Sleep(1500);
        cout << "Oyunu bitirdiniz tebrikler."<<endl;
        cout << "Son: iyi son" << endl;
}
void Localization::goodendingEN(){
        cout << "Thanks to your mercy, your reputation has spread"<< endl;
        cout << "Monsters don't fight you anymore, they see you as a friend" << endl; 
        Sleep(1500);
        cout << "Congratulations you finished the game."<<endl;
        cout << "Ending: Good Ending" << endl;
}