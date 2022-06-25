#include <iostream>
#include <characters.h>
#include <enemy.h>
#include <windows.h>
#include <fstream>
#include <random>
#include <cstdlib>
#include <sys/stat.h>
#include <Localization.h>

using namespace std;

string profile = getenv("USERPROFILE");

string langkarar;
string savekarar;
string quitkarar;
string yetenek;
void clearveuyku(int deger){
    Sleep(deger);
    system("CLS");
}
void parayokloc(){
    if (langkarar == "T" || langkarar == "t"){
        cout << "Yeterli altininiz yok." << endl;
    }else {
        cout << "Insufficent gold. " << endl;
    }
}
void sonseviyeloc(){
    if (langkarar == "T" || langkarar == "t"){
        cout << "Zaten son seviyeye ulasmissiniz." << endl;
    }else{
        cout << "You already reached final level." << endl;
    }
}

bool FileExists(string filename) {
    struct stat fileInfo;
    return stat(filename.c_str(), &fileInfo) == 0;
}

string secenek;
int level = 1;
int bounty= 0;

int ataksonrasi = 0;


int attack(int hp, int ap,int dp){
    hp -= (ap*12 - dp*3);
    ataksonrasi = hp;
    }

int main(){
    /*system("Color 0C");
    cout << "fdsgwr" << endl;
    cout << "acik" << endl << endl;
    system("Color 04");
    cout << "koyu" << endl; */
    
    
    ofstream myfile;
    
    
    /*ofstream file(profile+ "\\Desktop\\abcdefg.txt"); //
    string data("data to write to file");
    file << data; */
    
    
    
    ///////////////////istatistik kodlari///////////////////
    
    characters Player;
    Player.name = "adsiz"; // "player"
    Player.health = 100;
    Player.maxhealth = 100;
    Player.healthlvl = 0;
    Player.attacklvl = 2;
    Player.defendlvl = 1;
    Player.lucklvl = 1;
    Player.potionenv = 1;
    Player.money =100;
    Player.vicdan =0;
    
    
    enemy sus;
    sus.ehealth = 30;
    sus.eattacklvl = 1;
    sus.edefendlvl = 2;
    sus.elucklvl = 1;
    
    Localization loc;
    
    ///////////////////istatistik kodlari///////////////////
    
    
    /*                 MENU KODLARI                       */
    langpoint:
    cout << "Dil/Language " << endl;
    cout << "E:English" << endl; 
    cout << "T:Turkce"  << endl; 
    cout << ">> ";
    cin >> langkarar;
    //cout << langkarar;
    if (langkarar == "T" || langkarar == "E" || langkarar == "t" || langkarar == "e"){
    } else {
        cout << "hatali deger / wrong value" << endl;
        clearveuyku(1000);
        goto langpoint;
    }
    clearveuyku(100);
    
    menupoint:
    string menu;
    if (langkarar == "T" || langkarar == "t"){
        loc.mainmanuTR();
    }else{
        loc.mainmenuEN();
    }
    cin >> menu;
    if (menu == "E" || menu == "e") {
        exit(0);
    }else if (menu == "S" || menu == "s"){
        if (langkarar == "T" || langkarar == "t"){
        Player.playerstatsTR(); } else {
            Player.playerstatsEN();
        }
        clearveuyku(4000);
        goto menupoint;
    }else if (menu == "B" || menu == "b") {
    if (Player.name == "adsiz"){
        
    if (langkarar == "T" || langkarar == "t"){
        cout << endl << "isim girin: ";
    }else{
        cout << endl << "Type your name: ";
    }
    cin >> Player.name;
    
    Player.name = Player.name + " ";
    clearveuyku(30); 
    } else {
    if (langkarar == "T" || langkarar == "t"){
    cout << "baslatiliyor...."; } else {
    cout << "Starting...";
    }
    clearveuyku(3500);
    cout << "TEST Lore";
    clearveuyku(700); }
    }
    else if ( menu == "K" || menu == "k") {
    //savestats
    //ofstream myfile;
    myfile.open (profile+ "\\Desktop\\savestats");
    myfile <<Player.name << " " << level << " " << Player.money << " " << Player.potionenv << " " << Player.health << " " << Player.maxhealth << " " << Player.healthlvl << " " << Player.attacklvl << " " << Player.defendlvl << " " << Player.lucklvl << " " << Player.vicdan;
    myfile.close();
    if (langkarar == "T" || langkarar == "t"){
        cout << "kayit dosyasi basariyla olusturuldu !!" << endl;
    }else{
        cout << "Savefile successfully created !!" << endl;
    }
    
    clearveuyku(2000);
    goto menupoint;
    }
    else if ( menu == "L" || menu == "l") {
    if (FileExists(profile+ "\\Desktop\\savestats") == 1){
    ifstream savefile(profile +"\\Desktop\\savestats");
    savefile >> Player.name >> level >> Player.money >> Player.potionenv >> Player.health >> Player.maxhealth >> Player.healthlvl >> Player.attacklvl >> Player.defendlvl >> Player.lucklvl >> Player.vicdan;
    if (langkarar == "T" || langkarar == "t"){
    cout << "Kayit dosyasi basariyla yuklendi !" << endl; } else {
    cout << "Savefile created successfully !" << endl; 
    }
    clearveuyku(2000);
    goto menupoint;
    }else {
        if (langkarar == "T" || langkarar == "t"){
        cout << "Kayit dosyasi bulunamadi !! " << endl;
        }else{
        cout << "Savefile not found !! " << endl;
        }
        clearveuyku(2000);
        goto menupoint;
    }
    }
    else if ( menu == "C" || menu == "c"){
        if (langkarar == "T" || langkarar == "t"){
        cout << " \n";
        cout << " Grafikler: Emir Kaplan" << endl;
        Sleep(200);
        cout << " Yazilim  : Emir Kaplan" << endl;
        
        }else{
        cout << " \n";
        cout << " Graphics: Emir Kaplan" << endl;
        Sleep(200);
        cout << " Programming : Emir Kaplan" << endl;
        }
        clearveuyku(2000);
        goto menupoint;
    }
    else {
        if (langkarar == "T" || langkarar == "t"){
        cout << "hatali giris yaptiniz ! " << endl;
        }else{
        cout << "Your letter is incorrect ! " << endl;
        }
        clearveuyku(2000);
        goto menupoint;
    }
    
    
    
    /*                 MENU KODLARI                       */
    levelpoint:
    
    /* Attribute */
    if      (level == 1) { sus.ehealth = 20; sus.eattacklvl = 2; sus.edefendlvl =2; sus.elucklvl =1;sus.merhamet =3; bounty =100;}
    else if (level == 2) { sus.ehealth = 30; sus.eattacklvl = 1; sus.edefendlvl =2; sus.elucklvl =1;sus.merhamet =3; bounty =150;}
    else if (level == 3) { sus.ehealth = 24; sus.eattacklvl = 3; sus.edefendlvl =3; sus.elucklvl =2;sus.merhamet =2; bounty =400;}
    else if (level == 4) { sus.ehealth = 35; sus.eattacklvl = 3; sus.edefendlvl =1; sus.elucklvl =3;sus.merhamet =1; bounty =500;}
    else if (level == 5) { sus.ehealth = 40; sus.eattacklvl = 2; sus.edefendlvl =2; sus.elucklvl =2;sus.merhamet =2; bounty =700;}
    else if (level == 6) { sus.ehealth = 60; sus.eattacklvl = 2; sus.edefendlvl =2; sus.elucklvl =3;sus.merhamet =4; bounty =800;}
    else if (level == 7) { sus.ehealth = 65; sus.eattacklvl = 3; sus.edefendlvl =2; sus.elucklvl =3;sus.merhamet =3; bounty =950;}
    else if (level == 100) { sus.ehealth = 9000; sus.eattacklvl = 40; sus.edefendlvl =10; sus.elucklvl =5;sus.merhamet =-100; bounty =5000000;}
    
    
    /* baslangic noktasi */
    
    checkpoint:
    if (langkarar == "T" || langkarar == "t"){
    sus.enemystatsTR(); } else {
        sus.enemystatsEN();
    }
    
    sus.enemygraphics(level);
    
    
    if (langkarar == "T" || langkarar == "t"){
        cout << "\nbir dusman belirdi !" << endl;
        cout << "ne yapacaksin : ";
    }else{
        cout << "\nan enemy approaching !" << endl;
        cout << "what are you going to do: ";
    }
  
    cin >> secenek;
    
    
    
    /* Attack */
    if (Player.health >0 && sus.ehealth >0 && secenek == "Attack" || secenek == "attack" || secenek == "ATTACK"){
        int v1 = rand() % 10 + 1;
        if (v1 <=8-sus.elucklvl) {
            
            attack(sus.ehealth,Player.attacklvl,sus.edefendlvl);
            sus.ehealth = ataksonrasi;
            Beep(600,500);
            if (langkarar == "T" || langkarar == "t"){
            cout << "Dusmanin cani " << sus.ehealth << endl; 
            }else {
            cout << "Enemy health is " << sus.ehealth << endl;
            }
        }    // burada kaldim
                    
        else if (v1 == 9-sus.elucklvl) {
            int critattack = Player.attacklvl+2;
            attack(sus.ehealth,critattack,sus.edefendlvl);
            sus.ehealth = ataksonrasi;
            Beep(700,650);
            if (langkarar == "T" || langkarar == "t"){
            cout << "kritik Darbe !!! " << endl;
            Sleep(200);
            cout << "Dusmanin cani " << sus.ehealth << endl;
            } else {
            cout << "Critical Attack !!! " << endl;
            Sleep(200);
            cout << "Enemy health is " << sus.ehealth << endl;
            }
        }
        else{
            if (langkarar == "T" || langkarar == "t"){
            cout << "rakibin hamleni onledi ! " << endl;
            }else {
                cout << "Enemy doged your attack ! " << endl;
            }
        }
            /*
        else if(v1 > 9-sus.elucklvl){
                cout << "rakibin hamleni onledi ! " << endl;
        }
        else{
            cout << "bug" << endl;
        }*/
            if (sus.ehealth <=0) {
            if (langkarar == "T" || langkarar == "t"){
            cout << "Rakibinizi alt ettiniz ve "<< bounty <<" altin kazandiniz ! tebrikler !" << endl;
            }else {
            cout << "you beat your opponent and earned " << bounty << " gold ! Congratulations !" << endl;  
            }
            clearveuyku(3000);
            
            level = level + 1;
            Player.vicdan -=2;
            Player.money = Player.money + bounty;
            if(Player.health != Player.maxhealth){
                if(Player.maxhealth-Player.health < 20){
                    Player.health +=(Player.maxhealth-Player.health);
                    }else{
                    Player.health +=20;
                    } 
            }
            
            //kotuson buraya
            //kotuson
            if(Player.vicdan < -5){
                system("Color 04");
                Beep(500,400);
                Beep(400,300);
                Beep(300,500);
                
                if (langkarar == "T" || langkarar == "t"){
                    loc.badendTR();
                }else {
                    loc.badendEN();
                }
                clearveuyku(4000);
                level = 100;
                goto levelpoint;
            }
            if(level == 8){ // her eklenen levelde bu level degisecek
            if (langkarar == "T" || langkarar == "t"){
              loc.neutralendTR();   
            }else{
              loc.neutralendEN();
            }
                Sleep(2500);
                exit(0);
            }
            
            /* MARKET MENU */
            
            marketpoint:
            if (langkarar == "T" || langkarar == "t"){
            cout << "----Istatistikleriniz----" << endl;
            }else {
            cout << "-----Your Statics-----" << endl;
            }
            
            if (langkarar == "T" || langkarar == "t"){
                Player.playerstatsTR();
                loc.marketTR(Player.money);
            }else {
                Player.playerstatsEN();
                loc.marketEN(Player.money);
            }
            
            cin >> yetenek;
            
            ////
            
            
            if (yetenek == "1"){ // saldiri
                if (Player.attacklvl <=3){
                    if(Player.money >300){
                    Player.attacklvl +=1;
                    Player.money -=300;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "Kuvvetiniz 1 seviye atladi !" << endl; } else {
                    cout << "Your power skill +1 level up !" << endl; 
                    }
                    clearveuyku(3000);
                    
                    }else { 
                    parayokloc();
                    clearveuyku(3000);
                    goto marketpoint;
                    }
                }  else {
                    sonseviyeloc();
                    clearveuyku(3000);
                    goto marketpoint;
                    }
            }
            else if (yetenek == "2"){ // savunma
                if (Player.defendlvl <=3){
                    if(Player.money >=350){
                    Player.defendlvl +=1;
                    Player.money -=350;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "Zirhiniz guclendirildi ve 1 seviye atladi !" <<endl;
                    }else {
                    cout << "You upgraded your armor and +1 leveled up !" << endl; 
                    }
                    clearveuyku(3000);
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto marketpoint;
                    }
                } else { sonseviyeloc();
                clearveuyku(3000);
                goto marketpoint;
                }
            }
            else if (yetenek == "3"){ // can
                if (Player.healthlvl <=3){
                    if(Player.money >=300){
                    Player.healthlvl +=1;
                    Player.money -=300;
                    Player.maxhealth += Player.healthlvl*10;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "Saglik seviyeniz 1 artti ! " <<endl;
                    cout << "artik max saglik puaniniz : " << Player.maxhealth << endl; }else{
                    cout << "Your health +1 leveled up ! " << endl;
                    cout << "Your max HP now : " << Player.maxhealth << endl;  
                    }
                    clearveuyku(3000);
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto marketpoint;
                    }
                } else {
                sonseviyeloc();
                clearveuyku(3000);
                goto marketpoint;
                }
            }
            else if (yetenek == "4"){ // sans
                if (Player.lucklvl <=3){
                    if(Player.money >=400){
                    Player.lucklvl +=1;
                    Player.money -=400;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "kolyeyi taktiniz ve 1 seviye sansiniz artti ! " << endl;
                    }else {
                    cout << "You equiped the necklace now your luck +1 leveled up !" << endl; 
                    }
                    clearveuyku(3000); 
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto marketpoint;
                    }
                } else {sonseviyeloc();
                clearveuyku(3000);
                goto marketpoint;
                }
            }
            else if (yetenek == "5"){ //pot
                if (Player.potionenv <=3){
                    if(Player.money >=200){
                    Player.potionenv +=1;
                    Player.money -=200;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "\n1 tane iksir satin aldiniz." << endl; } else {
                    cout << "\nYou bought 1 health potion." << endl; 
                    }
                    clearveuyku(3000);
                    
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto marketpoint;
                    }
                } else { sonseviyeloc();
                clearveuyku(3000);
                goto marketpoint;
                }
                
            }
            else if (yetenek == "0"){
                
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "kayit yapmak icin 'evet' veya 'e' yaziniz yapmak istemiyorsaniz herhangi birsey yaziniz: "<< endl;
                    cin >> savekarar;
                    if(savekarar == "evet" ||savekarar == "Evet"|| savekarar == "E" || savekarar == "e"){
                        myfile.open (profile+ "\\Desktop\\savestats");
                        myfile << Player.name << " " << level << " " << Player.money << " " << Player.potionenv << " " << Player.health << " " << Player.maxhealth << " " << Player.healthlvl << " " << Player.attacklvl << " " << Player.defendlvl << " " << Player.lucklvl << " " << Player.vicdan;
                        myfile.close();
                        cout << "Ilerlemen basariyla kaydedildi !!" << endl; 
                        clearveuyku(2000);
                    }
                    cout << "Yukleniyor..."; 
                    
                    }else {
                        
                    cout << "If you want to save your progress, type 'yes' or 'y' or if you dont want, press type anything "<< endl;
                    cin >> savekarar;
                    if(savekarar == "yes" ||savekarar == "Yes"|| savekarar == "Y" || savekarar == "y"){
                        myfile.open (profile+ "\\Desktop\\savestats");
                        myfile << Player.name << " " << level << " " << Player.money << " " << Player.potionenv << " " << Player.health << " " << Player.maxhealth << " " << Player.healthlvl << " " << Player.attacklvl << " " << Player.defendlvl << " " << Player.lucklvl << " " << Player.vicdan;
                        myfile.close();
                        cout << "Your progress saved successfully !!" << endl; }
                        clearveuyku(2000);
                        cout << "Loading..."; 
                    }
                    
                    clearveuyku(3000);
                    goto levelpoint;
            }else {
                if (langkarar == "T" || langkarar == "t"){
                cout << "hatali giris yaptiniz" << endl; } else {
                cout << "Your value is invalid" << endl;
                }
                    clearveuyku(3000);
                    goto marketpoint;
            }
            
            
            
            ////
            
            goto marketpoint;

            
            /*sus.eattacklvl = sus.eattacklvl + 1;
            sus.edefendlvl = sus.edefendlvl + 1;
            sus.ehealth = sus.ehealth +50; */
            goto menupoint;
        }
        if (langkarar == "T" || langkarar == "t"){
        cout << "rakip dusunuyor..."<< endl; } else {
        cout << "Your enemy is thinking..." << endl;
        }
        Sleep(2000);
        int v2 = rand() % 10 + 1;
        if (v2 <= 5+Player.lucklvl){
            attack(Player.health,sus.eattacklvl,Player.defendlvl);
                Player.health = ataksonrasi;
                cout << "-///SLASH!!!///-" << endl;
                Beep(600,500);
                if (langkarar == "T" || langkarar == "t"){
                cout << "dusmanin tarafindan darbe aldin ! canin " << Player.health <<endl; }else {
                cout << "Your enemy attacked you ! your hp " << Player.health << endl;
                }
                clearveuyku(2000);
                
        }
        else if (v2 > 5+Player.lucklvl) {
                if (langkarar == "T" || langkarar == "t"){
                cout << "dusmaninin darbesini engelledin !!"<<endl;} else {
                cout << "You dodged enemy attack !! " << endl;
                }
                clearveuyku(2000);
        }
        else {cout << "bug";}
        
        if (Player.health <= 0){
            if (langkarar == "T" || langkarar == "t"){
            cout << "Rakibiniz sizi alt etti ! kaybettiniz."<< endl; } else {
            cout << "Your enemy has defeated you ! You lost." << endl;
            }
            Sleep(3500);
            exit(0);
        }
        
        goto checkpoint;
        
    }
    
    
    else if (secenek == "Help" || secenek == "help" || secenek == "HELP") {
        if (langkarar == "T" || langkarar == "t"){
            loc.helpTR();
        }else {
            loc.helpEN();
        }
        clearveuyku(5000);
        goto checkpoint;
    }
    else if (secenek == "potion" || secenek == "pot" || secenek == "POTION" || secenek == "Pot" || secenek == "Potion") {
        if (Player.potionenv > 0) {
            if(Player.health < Player.maxhealth) {
            if ((Player.maxhealth-Player.health <50)){  // pot icince maxhealth gecirmeme kodu
                Player.health += (Player.maxhealth-Player.health);
                Player.potionenv -=1;
                if (langkarar == "T" || langkarar == "t"){
                cout << "pot icildi yeni saglik: " << Player.health << "/" << Player.maxhealth << endl; } else {
                cout << "You drank a potion. Now your health is: " << Player.health << "/" << Player.maxhealth << endl; 
                }
                clearveuyku(2500);
                goto checkpoint;
            }
            Player.health += 50;
            Player.potionenv -=1;
                if (langkarar == "T" || langkarar == "t"){
                cout << "pot icildi yeni saglik: " << Player.health << "/" << Player.maxhealth << endl; } else {
                cout << "You drank a potion. Now your health is: " << Player.health << "/" << Player.maxhealth << endl; 
                }
                clearveuyku(2500);
            goto checkpoint;
            }else {
                if (langkarar == "T" || langkarar == "t"){
                cout << "iksir icmeye ihtiyaciniz yok"<< endl; } else {
                cout << "You dont need to drink a potion" << endl;
                }
                clearveuyku(2500);
                goto checkpoint;
            }
        }
        else {
            if (langkarar == "T" || langkarar == "t"){
            cout << "Hic iksire sahip degilsiniz..." << endl;} else {
            cout << "You dont have any potion..." << endl;
            }
            clearveuyku(2500);
            goto checkpoint;
        }
    }
    
    
    else if (secenek == "stats" || secenek == "Stats" || secenek == "STATS") {
        if (langkarar == "T" || langkarar == "t"){
        Player.playerbattlestatsTR(); } else {
            Player.playerbattlestatsEN();
        }
        clearveuyku(3000);
        goto checkpoint;
    }
    
    
    else if (secenek == "quit" || secenek == "Quit" ||secenek == "q"){
            quit:
            if (langkarar == "T" || langkarar == "t"){
            cout << "cikarsaniz kaydedilmeyen ilerlemeniz kaybolacaktir. Onayliyormusunuz (Y/N) ?" <<endl;} else {
            cout << "Your unsaved progress will be lost. Are you sure (Y/N) ?" << endl;
            }
            cin >> quitkarar;
            if (quitkarar == "Y" || quitkarar == "y"){
            Sleep(1500);
            clearveuyku(100);
            goto menupoint;
            //exit(0);
            }else if (quitkarar == "N" || quitkarar == "n"){
            clearveuyku(600);
            goto checkpoint;
            }else {
                if (langkarar == "T" || langkarar == "t"){
                cout << "gecerli deger giriniz..."; }else {
                cout << "enter valid value...";  
                }
                goto quit; 
            }
            
    }else if (secenek == "talk" || secenek == "Talk"){
        sus.merhamet +=1;
        //Player.vicdan +=1;
        //cout << Player.vicdan;
        //cout << sus.merhamet;
        
        if (sus.merhamet > 6) {
            if (langkarar == "T" || langkarar == "t"){
             loc.talkwinTR(bounty);   
            }else {
             loc.talkwinEN(bounty);
            }
            clearveuyku(3000);
            level = level + 1;
            Player.vicdan +=1;
            Player.money = Player.money + bounty;
            if(Player.health != Player.maxhealth){
                if(Player.maxhealth-Player.health < 20){
                    Player.health +=(Player.maxhealth-Player.health);
                    }else{
                    Player.health +=20;
                    } 
            }
            
            //iyison buraya
        //iyison
            if(Player.vicdan > 5) {
                clearveuyku(2000);
                system("Color 0A");
                if (langkarar == "T" || langkarar == "t"){
                loc.goodendingTR(); }else{
                loc.goodendingEN();
                }
                exit(0);
            }
            
            
             /* MARKET MENU */
            
           vmarketpoint:
            if (langkarar == "T" || langkarar == "t"){
            cout << "----Istatistikleriniz----" << endl;
            }else {
            cout << "-----Your Statics-----" << endl;
            }
            
            if (langkarar == "T" || langkarar == "t"){
                Player.playerstatsTR();
                loc.marketTR(Player.money);
            }else {
                Player.playerstatsEN();
                loc.marketEN(Player.money);
            }
            cin >> yetenek;
            
            if (yetenek == "1"){ // saldiri
                if (Player.attacklvl <=3){
                    if(Player.money >300){
                    Player.attacklvl +=1;
                    Player.money -=300;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "Kuvvetiniz 1 seviye atladi !" << endl; } else {
                    cout << "Your power skill +1 level up !" << endl; 
                    }
                    clearveuyku(3000);
                    
                    }else { 
                    parayokloc();
                    clearveuyku(3000);
                    goto vmarketpoint;
                    }
                }  else {
                    sonseviyeloc();
                    clearveuyku(3000);
                    goto vmarketpoint;
                    }
            }
            else if (yetenek == "2"){ // savunma
                if (Player.defendlvl <=3){
                    if(Player.money >=350){
                    Player.defendlvl +=1;
                    Player.money -=350;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "Zirhiniz guclendirildi ve 1 seviye atladi !" <<endl;
                    }else {
                    cout << "You upgraded your armor and +1 leveled up !" << endl; 
                    }
                    clearveuyku(3000);
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto vmarketpoint;
                    }
                } else { sonseviyeloc();
                clearveuyku(3000);
                goto vmarketpoint;
                }
            }
            else if (yetenek == "3"){ // can
                if (Player.healthlvl <=3){
                    if(Player.money >=300){
                    Player.healthlvl +=1;
                    Player.money -=300;
                    Player.maxhealth += Player.healthlvl*10;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "Saglik seviyeniz 1 artti ! " <<endl;
                    cout << "artik max saglik puaniniz : " << Player.maxhealth << endl; }else{
                    cout << "Your health +1 leveled up ! " << endl;
                    cout << "Your max HP now : " << Player.maxhealth << endl;  
                    }
                    clearveuyku(3000);
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto vmarketpoint;
                    }
                } else {
                sonseviyeloc();
                clearveuyku(3000);
                goto vmarketpoint;
                }
            }
            else if (yetenek == "4"){ // sans
                if (Player.lucklvl <=3){
                    if(Player.money >=400){
                    Player.lucklvl +=1;
                    Player.money -=400;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "kolyeyi taktiniz ve 1 seviye sansiniz artti ! " << endl;
                    }else {
                    cout << "You equiped the necklace now your luck +1 leveled up !" << endl; 
                    }
                    clearveuyku(3000); 
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto vmarketpoint;
                    }
                } else {sonseviyeloc();
                clearveuyku(3000);
                goto vmarketpoint;
                }
            }
            else if (yetenek == "5"){ //pot
                if (Player.potionenv <=3){
                    if(Player.money >=200){
                    Player.potionenv +=1;
                    Player.money -=200;
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "\n1 tane iksir satin aldiniz." << endl; } else {
                    cout << "\nYou bought 1 health potion." << endl; 
                    }
                    clearveuyku(3000);
                    
                    }else { parayokloc();
                    clearveuyku(3000);
                    goto vmarketpoint;
                    }
                } else { sonseviyeloc();
                clearveuyku(3000);
                goto vmarketpoint;
                }
                
            }
            else if (yetenek == "0"){
                
                    if (langkarar == "T" || langkarar == "t"){
                    cout << "kayit yapmak icin 'evet' veya 'e' yaziniz yapmak istemiyorsaniz herhangi birsey yaziniz: "<< endl;
                    cin >> savekarar;
                    if(savekarar == "evet" ||savekarar == "Evet"|| savekarar == "E" || savekarar == "e"){
                        myfile.open (profile+ "\\Desktop\\savestats");
                        myfile << Player.name << " " << level << " " << Player.money << " " << Player.potionenv << " " << Player.health << " " << Player.maxhealth << " " << Player.healthlvl << " " << Player.attacklvl << " " << Player.defendlvl << " " << Player.lucklvl << " " << Player.vicdan;
                        myfile.close();
                        cout << "Ilerlemen basariyla kaydedildi !!" << endl; 
                        clearveuyku(2000);
                    }
                    cout << "Yukleniyor..."; 
                    
                    }else {
                        
                    cout << "If you want to save your progress, type 'yes' or 'y' or if you dont want, press type anything "<< endl;
                    cin >> savekarar;
                    if(savekarar == "yes" ||savekarar == "Yes"|| savekarar == "Y" || savekarar == "y"){
                        myfile.open (profile+ "\\Desktop\\savestats");
                        myfile << Player.name << " " << level << " " << Player.money << " " << Player.potionenv << " " << Player.health << " " << Player.maxhealth << " " << Player.healthlvl << " " << Player.attacklvl << " " << Player.defendlvl << " " << Player.lucklvl << " " << Player.vicdan;
                        myfile.close();
                        cout << "Your progress saved successfully !!" << endl; }
                        clearveuyku(2000);
                        cout << "Loading..."; 
                    }
                    
                    clearveuyku(3000);
                    goto levelpoint;
            }else {
                if (langkarar == "T" || langkarar == "t"){
                cout << "hatali giris yaptiniz" << endl; } else {
                cout << "Your value is invalid" << endl;
                }
                    clearveuyku(3000);
                    goto vmarketpoint;
            }
            goto vmarketpoint;
            
            goto menupoint;
        }else {
        if (langkarar == "T" || langkarar == "t"){
        cout << "konusmayi denedin, ama sana sadece bakti" << endl;
        cout << "rakip dusunuyor..."<< endl; } else {
        cout << "you tried to talk, but he just looked at you" << endl;
        cout << "Your enemy is thinking..." << endl;
        }
        Sleep(2000);
        int v2 = rand() % 10 + 1;
        if (v2 <= 5+Player.lucklvl){
            attack(Player.health,sus.eattacklvl,Player.defendlvl);
                Player.health = ataksonrasi;
                cout << "-///SLASH!!!///-" << endl;
                if (langkarar == "T" || langkarar == "t"){
                cout << "dusmanin tarafindan darbe aldin ! canin " << Player.health <<endl; }else {
                cout << "Your enemy attacked you ! your hp " << Player.health << endl;
                }
                clearveuyku(2000);
                
        }
        else if (v2 > 5+Player.lucklvl) {
                if (langkarar == "T" || langkarar == "t"){
                cout << "dusmaninin darbesini engelledin !!"<<endl;} else {
                cout << "You dodged enemy attack !! " << endl;
                }
                clearveuyku(2000);
        }
        else {cout << "bug";}
        
        if (Player.health <= 0){
            if (langkarar == "T" || langkarar == "t"){
            cout << "Rakibiniz sizi alt etti ! kaybettiniz."<< endl; } else {
            cout << "Your enemy has defeated you ! You lost." << endl;
            }
            Sleep(3500);
            exit(0);
        }
        
        //clearveuyku(2000);
        goto checkpoint;
    }
    
    }
    
    else {
        if (langkarar == "T" || langkarar == "t"){
        cout << "Hatali deger ! Komutlari ogrenmek icin 'help' yaziniz... " << endl; }else{
        cout << "Invalid value ! Type 'help' for learn commands..." << endl;  
        }
        clearveuyku(3000);
        goto checkpoint;
    }
    
    
    
    return 0;
}


/* 
 MAX 100
 NOW 80
 POT 50
  * 
    cd /d %userprofile%/desktop     --> direk desktopu bulur
    
    savestate           Calisiyor
    talk                Calisiyor
    quit                Calisiyor
    crittical attack    eklendi
    Deformasyonlar      Calisiyor
    sesler              Calisiyor
    
    regen bug           Duzeltildi
    sonlar              Yapildi
    notr son            eklendi
     ◘ 
  */
  
  // saklamam gereken degerler 
  // level potenv money
  // attacklvl defendlvl lucklvl healthlvl health
  