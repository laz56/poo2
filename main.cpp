
//Made by Lazar Iulian ,UPB OOP2 Final Exam.ASCII ART source: https://www.textartcopy.com/
//change
#include <iostream>
#include <vector>
#include <cmath>
#include <conio.h>
#include <windows.h>

#define clear() system("cls")
using namespace std;

class Player {
public:
    string name;
    int life;
    unsigned int damage;
    int coins = 0;

    Player(string _name, int _life, unsigned int _damage, int _coins) : name(_name), life(_life), damage(_damage),
                                                                        coins(_coins) {}
};

class Enemies {
public:
    string name;
    int life;
    unsigned int damage;
    int reward;

    Enemies(string _name, int _life, unsigned int _damage, int _reward) : name(_name), life(_life), damage(_damage),
                                                                          reward(_reward) {}
};


class Warrior : public Player {
public:
    Warrior(string nume) : Player(nume, 100, 70, 0) {}
};

class Mage : public Player {
public:
    Mage(string nume) : Player(nume, 60, 140, 0) {}
};

class Medic : public Player {
public:
    Medic(string nume) : Player(nume, 240, 30, 0) {}
};

// Enemy classes
class Skeleton : public Enemies {
public:
    Skeleton() : Enemies("Skeleton", 30, 20, 50) {}
};

class Zombie : public Enemies {
public:
    Zombie() : Enemies("Zombie", 50, 10, 80) {}
};

class Dragon : public Enemies {
public:
    Dragon() : Enemies("Dragon", 200, 50, 100) {}
};

void startMenu() {
    clear();
    cout << "*******************************************" << endl;
    cout << "***************Dungeon Quest***************" << endl;
    cout << "*******************************************" << endl;
    cout << "*******************************************" << endl;
    cout << "*************Play the game (type a)*********" << endl;
    cout << "*******************************************" << endl;
    cout << "**************Credits (type c)**************" << endl;
    cout << "*******************************************" << endl;
}

void showShop() {
    cout << "*************Welcome*to*Shop***************" << endl;
    cout << "*******************************************" << endl;
    cout << "*********(1)****Buy*10*HP*(20*coins)******" << endl;
    cout << "*******************************************" << endl;
    cout << "******(2)**Buy*5*attack*damage*(10*coins)**" << endl;
    cout << "*******************************************" << endl;
    cout << "****************(q)Quit********************" << endl;
    cout << "*******************************************" << endl;
}

void ChooseClass() {
    clear();
    cout << "**************************************************" << endl;
    cout << "***************** Select your class ****************" << endl;
    cout << "***************** (1) Warrior *********************" << endl;
    cout << "**************************************************" << endl;
    cout << "***************** (2) Mage ************************" << endl;
    cout << "**************************************************" << endl;
    cout << "***************** (3) Medic ***********************" << endl;
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
    cout << "********* press q to return ***************" << endl;
}

void drawLine() {
    cout << "**************************************************" << endl;
}

void drawSquareLine() {
    cout << "**************************************************" << endl;
    cout << "*                                                *" << endl;
}

void SkeletonDisplay() {
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
            "    ==' '==";
}

void dragonDisplay() {
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
            "  \\______(_______;;; __;;;";
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
            "                   ____%%@ @%%_______";
}

void level2(Player &player);

void level1(Player &player) {
    clear();

    drawLine();
    cout << "********************* Level 1 ********************" << endl;
    SkeletonDisplay();
    Skeleton monster;
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {
        cout << "Player HP: " << player.life << " | Monster HP: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = getch();
        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the monster!" << endl;
                break;
            }
            case '2': {
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            player.coins += monster.reward;
            Sleep(2000);
            clear();


            player.life -= monster.damage;
            cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;

            if (player.life <= 0) {
                cout << "You were defeated by the " << monster.name << "!" << endl;
                Sleep(2000);
                clear();
                startMenu();
                break;
            }

            cout << endl;
        }
        Sleep(2000);
        showShop();
        char buy = getch();

        if (buy == '1' && player.coins >= 20) {
            player.life += 10;
            player.coins -= 20;
            cout << "You bought 10 hp " << "now you have " << player.life << "HP " << "and " << player.coins
                 << " Coins" << " !";
            Sleep(2000);
            clear();
            cout << "Congratulations! You have completed Level 1!" << endl;
            //lvl2
            cout << "Press any key to continue to Level 2..." << endl;
            getch();
            clear();
            level2(player);
        } else {
            cout << "You don't have enough coins :(";
            Sleep(2000);
            clear();
            showShop();
            char buy = getch();
        }
        if (buy == '2' && player.coins >= 10) {
            player.damage += 5;
            player.coins -= 10;
            cout << "You bought 5 attack damage! " << "Now you have " << player.damage << "DMG " << "and "
                 << player.coins
                 << " Coins" << " !";

            Sleep(2000);
            clear();
            cout << "Congratulations! You have completed Level 1!" << endl;
            //lvl2
            cout << "Press any key to continue to Level 2..." << endl;
            getch();
            clear();
            level2(player);
        } else {
            cout << "You don't have enough coins :(";
            Sleep(2000);
            clear();
            showShop();
            char buy = getch();
        }
        if (buy == 'q') {
            clear();
            if (player.life > 0) {
                cout << "Congratulations! You have completed Level 1!" << endl;
                //lvl2
                cout << "Press any key to continue to Level 2..." << endl;
                getch();
                clear();
                level2(player);
            }
        }


    }
}

void level3(Player &player);

void level2(Player &player) {
    clear();
    drawLine();
    cout << "********************* Level 2 ********************" << endl;
    zombieDisplay();
    Zombie monster;
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {
        cout << "Player life: " << player.life << " | Monster life: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = getch();

        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the monster!" << endl;
                break;
            }
            case '2': {
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            Sleep(2000);
            clear();
            break;
        }

        // Monster's turn
        player.life -= monster.damage;
        cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;

        if (player.life <= 0) {
            cout << "You were defeated by the " << monster.name << "!" << endl;
            Sleep(2000);
            clear();
            startMenu();
            break;
        }

        cout << endl;
    }
    Sleep(2000);
    showShop();
    char buy = getch();
    if (buy == '1') {
        player.life += 10;
        player.coins -= 20;
        cout << "You bought 10 hp " << "now you have " << player.life << "HP " << "and " << player.coins
             << " Coins" << " !";
        Sleep(2000);
        clear();
        cout << "Congratulations! You have completed Level 2!" << endl;
        //lvl2
        cout << "Press any key to continue to Level 3..." << endl;
        getch();
        clear();
        level3(player);
    }
    if (buy == '2') {
        player.damage += 5;
        player.coins -= 10;
        cout << "You bought 5 attack damage! " << "Now you have " << player.damage << "DMG " << "and " << player.coins
             << " Coins" << " !";
        Sleep(2000);
        clear();
        cout << "Congratulations, " << player.name << " !" << " You have completed Level 1!" << endl;
        //lvl2
        cout << "Press any key to continue to Level 2..." << endl;
        getch();
        clear();
        level3(player);
    }
    if (buy == 'q') {
        clear();
        if (player.life > 0) {
            cout << "Congratulations, " << player.name << " !" << " You have completed Level 2!" << endl;
            //lvl2
            cout << "Press any key to continue to Level 3..." << endl;
            getch();
            clear();
            level3(player);
        }
    }
}


void level3(Player &player) {
    clear();
    dragonDisplay();
    drawLine();
    cout << "********************* Level 3 ********************" << endl;
    Dragon monster;
    cout << "A " << monster.name << " appears!" << endl;

    while (player.life > 0 && monster.life > 0) {
        cout << "Player life: " << player.life << " | Monster life: " << monster.life << endl;
        drawSquareLine();
        cout << "Choose your action:" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;

        char option = getch();

        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the monster!" << endl;
                break;
            }
            case '2': {
                cout << "You try to run away but failed!" << endl;
                break;
            }
        }

        if (monster.life <= 0) {
            cout << "You defeated the " << monster.name << "!" << endl;
            Sleep(2000);
            clear();
            break;
        }

        // Monster's turn
        player.life -= monster.damage;
        cout << "The " << monster.name << " dealt " << monster.damage << " damage to you!" << endl;
        Sleep(2000);
        clear();
        if (player.life <= 0) {
            cout << "You were defeated by the " << monster.name << "!" << endl;
            Sleep(2000);

            clear();
            startMenu();
            break;
        }

        cout << endl;
    }

    Sleep(2000);
    showShop();
    char buy = getch();
    if (buy == '1' && player.coins >= 20) {

        player.life += 10;
        player.coins -= 20;
        cout << "You bought 10 hp " << "now you have " << player.life << "HP " << "and " << player.coins
             << " Coins" << " !";

        Sleep(2000);
        clear();
        cout << "Congratulations, " << player.name << " !" << " You have completed Level 3!" << endl;
        //lvl2
        cout << "You completed lvl 3" << endl;
        getch();
        clear();
        startMenu();
    } else {
        cout << "You don't have enough coins :(";
        cout << "Congratulations, " << player.name << " !" << " You have completed Level 3!" << endl;
        //lvl2
        cout << "You completed lvl 3" << endl;
        getch();
        clear();
        startMenu();
    }

    if (buy == '2' && player.coins >= 10) {

        player.damage += 5;
        player.coins -= 10;
        cout << "You bought 5 attack damage! " << "Now you have " << player.damage << " attack damage " << "and "
             << player.coins
             << " Coins" << " !";
        Sleep(2000);
        clear();
        cout << "Congratulations, " << player.name << " !" << " You have completed Level 3!" << endl;
        //lvl2
        cout << "You completed the game!" << endl;
        getch();
        clear();
        startMenu();
    } else { cout << "You don't have enough coins :("; }
    if (buy == 'q') {
        clear();
        if (player.life > 0) {
            cout << "Congratulations! You have completed Level 3!" << endl;
            //lvl3
            cout << "You completed the game" << endl;
            getch();
            clear();
            startMenu();
        }
    }


}


void sleep(int ms) {
    Sleep(ms);
}

int main() {
    startMenu();
    char option;
    string nume;

    while (true) {
        option = getch();
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
                option = getch();
                switch (option) {
                    case '1': {
                        Warrior warrior(nume);
                        clear();
                        cout << "You chose Warrior!" << endl;
                        sleep(2000);
                        clear();
                        level1(warrior);
                        break;
                    }
                    case '2': {
                        Mage mage(nume);
                        clear();
                        cout << "You chose Mage!" << endl;
                        sleep(2000);
                        clear();
                        level1(mage);
                        break;
                    }
                    case '3': {
                        Medic medic(nume);
                        clear();
                        cout << "You chose Medic!" << endl;
                        sleep(2000);
                        clear();
                        level1(medic);
                        break;
                    }
                }
                break;

            case 'c':
            case 'C':
                credits();
                option = getch();
                if (option == 'q') {
                    startMenu();
                }
                break;
        }
    }

    return 0;
}
