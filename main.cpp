//Made by Lazar Iulian 413-C
//AScii art from https://www.asciiart.eu/
#include <iostream>
#include <vector>
#include <cmath>
#include <conio.h>
#include <windows.h>
#include "Clase.h"

#define clear() system("cls")
using namespace std;
using namespace clase;


void startMenu() {
    clear();
    cout << "*******************************************" << endl;
    cout << "*************** Dungeon Quest *************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "*********** Play the game (press a) *******" << endl;
    cout << "*******************************************" << endl;
    cout << "*************Credits  (press c) ***********" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;

}

void showDifMenu() {
    clear();
    cout << "*******************************************" << endl;
    cout << "*************** Dungeon Quest **************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "*********** Select Difficulty **************" << endl;
    cout << "*******************************************" << endl;
    cout << "********* (1) Easy ************************" << endl;
    cout << "*******************************************" << endl;
    cout << "********* (2) Medium **********************" << endl;
    cout << "*******************************************" << endl;
    cout << "********* (3) Hard ************************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
}

void showShop() {
    clear();
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "************* Welcome to Shop ***************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******(1)**** Buy potion(life+50) 20 coins***" << endl;
    cout << "*******************************************" << endl;
    cout << "******(2)** Buy AD potion(damage+10)30 coins **" << endl;
    cout << "*******************************************" << endl;
    cout << "**************** (q)Quit ********************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
}

void ChooseClass() {
    clear();
    cout << "**************************************************" << endl;
    cout << "**************************************************" << endl;
    cout << "***************** Select your class **************" << endl;
    cout << "***************** (1) Warrior ********************" << endl;
    cout << "**************************************************" << endl;
    cout << "***************** (2) Mage ***********************" << endl;
    cout << "**************************************************" << endl;
    cout << "***************** (3) Medic **********************" << endl;
    cout << "**************************************************" << endl;
    cout << "**************************************************" << endl;
}

void credits() {
    clear();
    cout << "*******************************************" << endl;
    cout << "*************** Dungeon Quest **************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "************* Made with love by ************" << endl;
    cout << "*******************************************" << endl;
    cout << "************* Lazar Iulian <3 **************" << endl;
    cout << "********* press (q) to return *************" << endl;
    cout << "*******************************************" << endl;
}

void drawLine() {
    cout << "**************************************************" << endl;
}

void drawSquareLine() {
    cout << "**************************************************" << endl;
    cout << "*                                                *" << endl;
}

void skeletonDisplay() {
    cout << "      .-.\n"
            "     (o.o)\n"
            "      |=|\n"
            "     __|__\n"
            "   //.=|=.\\\\\n"
            "  // .=|=. \\\\\n"
            "  \\\\ .=|=. //\n"
            "   \\\\(_=_)//\n"
            "    (:| |:)\n"
            "     || ||\n"
            "     () ()\n"
            "     || ||\n"
            "     || ||\n"
            "    ==' '==" << endl;
}

void DragonDisplay() {
    cout << "\n"
            "                \\||/\n"
            "                |  @___oo\n"
            "      /\\  /\\   / (__,,,,|\n"
            "     ) /^\\) ^\\/ _)\n"
            "     )   /^\\/   _)\n"
            "     )   _ /  / _)\n"
            " /\\  )/\\/ ||  | )_)\n"
            "<  >      |(,,) )__)\n"
            " ||      /    \\)___)\\\n"
            " | \\____(      )___) )___\n"
            "  \\______(_______;;; __;;;" << endl;
}

void zombieDisplay() {
    cout << "\n"
            "                                (()))\n"
            "                               /|x x|\n"
            "                              /\\( - )\n"
            "                      ___.-._/\\/\n"
            "                     /=`_'-'-'/  !!\n"
            "                     |-{-_-_-}     !\n"
            "                     (-{-_-_-}    !\n"
            "                      \\{_-_-_}   !\n"
            "                       }-_-_-}\n"
            "                       {-_|-_}\n"
            "                       {-_|_-}\n"
            "                       {_-|-_}\n"
            "                       {_-|-_}   \n"
            "                   ____%%@ @%%_______" << endl;
}

void RobotDisplay() {
    cout << "     ,     ,\n"
            "    (\\____/)\n"
            "     (_oo_)\n"
            "       (O)\n"
            "     __||__    \\)\n"
            "  []/______\\[] /\n"
            "  / \\______/ \\/\n"
            " /    /__\\\n"
            "(\\   /____\\" << endl;
}

void DifStats(Enemies& enemy, Dificultate dif) {
    switch (dif) {
        case Dificultate::Easy:

            break;
        case Dificultate::Medium:

            enemy.life += 50;
            enemy.damage += 5;
            break;
        case Dificultate::Hard:

            enemy.life += 100;
            enemy.damage += 10;
            break;
        case Dificultate::Impossible:

            enemy.life += 200;
            enemy.damage += 50;
            break;
    }
}

void KingDisplay() {
    cout << " .-._                                                   _,-,\n"
            "  `._`-._                                           _,-'_,'\n"
            "     `._ `-._                                   _,-' _,'\n"
            "        `._  `-._        __.-----.__        _,-'  _,'\n"
            "           `._   `#===\"\"\"           \"\"\"===#'   _,'\n"
            "              `._/)  ._               _.  (\\_,'\n"
            "               )*'     **.__     __.**     '*( \n"
            "               #  .==..__  \"\"   \"\"  __..==,  # \n"
            "               #   `\"._(_).       .(_)_.\"'   #" << endl;
}

void level2(Player& player, Dificultate dif);

void level1(Player& player, Dificultate dif) {
    clear();

    drawLine();
    cout << "********************* Level 1 ********************" << endl;
    skeletonDisplay();
    Skeleton monster;
    DifStats(monster, dif);
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {

        cout << "Player HP: " << player.life << " | Monster HP: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = _getch();
        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                drawLine();
                cout << "********************* Level 1 ********************" << endl;
                skeletonDisplay();
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
                break;
            }
            case '2': {
                drawLine();
                cout << "********************* Level 1 ********************" << endl;
                skeletonDisplay();
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            player.coins += monster.reward;
            Sleep(2000);
            clear();

            if (monster.life > 0) {
                player.life -= monster.damage;
                cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;
            }
            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }

            cout << endl;

            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = _getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(1400);
                    clear();

                }
                else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(1400);
                    clear();

                }
                else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }

                if (buy == 'q') {
                    inShop = false;
                }
                if (inShop == false) {
                    clear();
                    if (player.life > 0) {
                        cout << "Congratulations! You have completed Level 1!" << endl;
                        //lvl2
                        cout << "Press any key to continue to Level 2..." << endl;
                        _getch();
                        clear();
                        level2(player, dif);
                        return;
                    }
                }
            }
        }
        else {
            player.life -= monster.damage;
            cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;

            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }
        }
    }
}


void level3(Player& player, Dificultate dif);

void level2(Player& player, Dificultate dif) {
    clear();

    drawLine();
    cout << "********************* Level 2 ********************" << endl;
    zombieDisplay();
    Zombie monster;
    DifStats(monster, dif);
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {
        cout << "Player HP: " << player.life << " | Monster HP: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = _getch();
        clear();
        switch (option) {
            case '1': {
                drawLine();
                cout << "********************* Level 2 ********************" << endl;
                zombieDisplay();
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
                break;
            }
            case '2': {
                drawLine();
                cout << "********************* Level 2 ********************" << endl;
                zombieDisplay();
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            player.coins += monster.reward;
            Sleep(2000);
            clear();
            if (monster.life > 0) {
                player.life -= monster.damage;
                cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;
            }
            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }

            cout << endl;

            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = _getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(1400);
                    clear();

                }
                else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(1400);
                    clear();

                }
                else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }

                if (buy == 'q') {
                    inShop = false;
                }
                if (inShop == false) {
                    clear();
                    if (player.life > 0) {
                        cout << "Congratulations! You have completed Level 2!" << endl;
                        //lvl2
                        cout << "Press any key to continue to Level 3..." << endl;
                        _getch();
                        clear();
                        level3(player, dif);
                        return;
                    }
                }
            }
        }
        else {
            player.life -= monster.damage;
            cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;

            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }
        }
    }
}


void level4(Player& player, Dificultate dif);

void level3(Player& player, Dificultate dif) {
    clear();

    drawLine();
    cout << "********************* Level 3 ********************" << endl;
    DragonDisplay();
    Dragon monster;
    DifStats(monster, dif);
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {
        cout << "Player HP: " << player.life << " | Monster HP: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = _getch();
        clear();
        switch (option) {

            case '1': {
                drawLine();
                cout << "********************* Level 3 ********************" << endl;
                DragonDisplay();
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
                break;
            }
            case '2': {
                drawLine();
                cout << "********************* Level 3 ********************" << endl;
                DragonDisplay();
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            player.coins += monster.reward;
            Sleep(2000);
            clear();
            if (monster.life > 0) {
                player.life -= monster.damage;
                cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;
            }
            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }

            cout << endl;
            Sleep(2000);
            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = _getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(1400);
                    clear();

                }
                else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(1400);
                    clear();

                }
                else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }

                if (buy == 'q') {
                    inShop = false;
                }
                if (inShop == false) {
                    clear();
                    if (player.life > 0) {
                        cout << "Congratulations! You have completed Level 3!" << endl;
                        //lvl2
                        cout << "Press any key to continue to Level 4..." << endl;
                        _getch();
                        clear();
                        level4(player, dif);
                        return;
                    }
                }
            }
        }
        else {
            player.life -= monster.damage;
            cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;

            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }
        }
    }
}


void level5(Player& player, Dificultate dif);

void level4(Player& player, Dificultate dif) {
    clear();

    drawLine();
    cout << "********************* Level 4 ********************" << endl;
    RobotDisplay();
    Robot monster;
    DifStats(monster, dif);
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {
        cout << "Player HP: " << player.life << " | Monster HP: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = _getch();
        clear();
        switch (option) {
            case '1': {
                drawLine();
                cout << "********************* Level 4 ********************" << endl;
                RobotDisplay();
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
                break;
            }
            case '2': {
                drawLine();
                cout << "********************* Level 4 ********************" << endl;
                RobotDisplay();
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            player.coins += monster.reward;
            Sleep(2000);
            clear();
            if (monster.life > 0) {
                player.life -= monster.damage;
                cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;
            }
            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }

            cout << endl;

            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = _getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(1400);
                    clear();

                }
                else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(1400);
                    clear();

                }
                else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(1200);
                }

                if (buy == 'q') {
                    inShop = false;
                }
                if (inShop == false) {
                    clear();
                    if (player.life > 0) {
                        cout << "Congratulations! You have completed Level 4!" << endl;
                        //lvl2
                        cout << "Press any key to continue to final Level 5..." << endl;
                        _getch();
                        clear();
                        level5(player, dif);
                        return;
                    }
                }
            }
        }
        else {
            player.life -= monster.damage;
            cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;

            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }
        }
    }
}


void level4(Player& player, Dificultate dif);

void level5(Player& player, Dificultate dif) {
    clear();

    drawLine();
    cout << "********************* Level 5 ********************" << endl;
    KingDisplay();
    Boss king;
    DifStats(king, dif);
    cout << "The " << king.name << " appears!" << endl;

    while (player.life > 0 && king.life > 0) {
        cout << "Player HP: " << player.life << " | monster HP: " << king.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = _getch();
        clear();
        switch (option) {
            case '1': {
                drawLine();
                cout << "********************* Level 5 ********************" << endl;
                KingDisplay();
                king.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the King!" << endl;
                break;
            }
            case '2': {
                drawLine();
                cout << "********************* Level 5 ********************" << endl;
                KingDisplay();
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (king.life <= 0) {
            cout << "You defeated " << king.name << "!" << endl;
            player.coins += king.reward;
            Sleep(2000);
            clear();
            if (king.life > 0) {
                player.life -= king.damage;
                cout << "The " << king.name << " dealt " << king.damage << " damage to you!" << endl;
            }
            if (player.life <= 0) {
                cout << "You were defeated by  " << king.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }

            cout << endl;
            Sleep(2000);

            if (player.life > 0) {
                cout << "Congratulations! You have completed the Game!" << endl;
                //lvl4
                cout << "Press any key to exit and thank you for playing <3" << endl;
                _getch();
                clear();
                startMenu();
                return;
            }


        }
        else {
            player.life -= king.damage;
            cout << "The " << king.name << " dealt " << king.damage << " damage to you!" << endl;

            if (player.life <= 0) {
                cout << "You were defeated by the " << king.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                return;
            }
        }
    }
}

void sleep(int ms) {
    Sleep(ms);
}

int main() {
    startMenu();
    char option;
    Dificultate dif;
    string nume;

    while (true) {
        option = _getch();
        switch (option) {
            case 'a':
            case 'A':
                clear();
                cout << "Starting game..." << endl;
                sleep(2000);
                clear();

                cout << "Choose your name: ";
                cin >> nume;
                ChooseClass();
                option = _getch();
                switch (option) {
                    case '1': {
                        Warrior warrior(nume);
                        clear();
                        cout << "You chose Warrior!" << endl;
                        sleep(2000);
                        clear();

                        showDifMenu();
                        option = _getch();
                        switch (option) {
                            case '1':
                                dif = Dificultate::Easy;
                                clear();
                                cout << "You chose Easy difficulty!";

                                break;
                            case '2':
                                dif = Dificultate::Medium;
                                clear();
                                cout << "You chose Medium difficulty!";
                                break;
                            case '3':
                                dif = Dificultate::Hard;
                                clear();
                                cout << "You chose Hard difficulty!";
                                break;
                        }
                        Sleep(2000);

                        level1(warrior, dif);
                        break;
                    }
                    case '2': {
                        Mage mage(nume);
                        clear();
                        cout << "You chose Mage!" << endl;
                        sleep(2000);
                        clear();

                        showDifMenu();
                        option = _getch();
                        switch (option) {
                            case '1':
                                dif = Dificultate::Easy;
                                clear();
                                cout << "You chose Easy difficulty!";
                                break;
                            case '2':
                                dif = Dificultate::Medium;
                                clear();
                                cout << "You chose Medium difficulty!";
                                break;
                            case '3':
                                dif = Dificultate::Hard;
                                clear();
                                cout << "You chose Hard difficulty!";
                                break;
                        }
                        Sleep(2000);

                        level1(mage, dif);
                        break;
                    }
                    case '3': {
                        Medic medic(nume);
                        clear();
                        cout << "You chose Medic!" << endl;
                        sleep(2000);
                        clear();

                        showDifMenu();
                        option = _getch();
                        switch (option) {
                            case '1':
                                dif = Dificultate::Easy;
                                break;
                                clear();
                                cout << "You chose Easy difficulty!";
                            case '2':
                                dif = Dificultate::Medium;
                                clear();
                                cout << "You chose Medium difficulty!";
                                break;
                            case '3':
                                dif = Dificultate::Hard;
                                clear();
                                cout << "You chose Hard difficulty!";
                                break;
                        }
                        Sleep(2000);

                        level1(medic, dif);
                        break;
                    }
                }
                break;

            case 'c':
            case 'C':
                credits();
                option = _getch();
                if (option == 'q') {
                    startMenu();
                }
                break;
        }


        return 0;
    }
}