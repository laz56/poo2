
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

enum class Dificultate {
    Easy, Medium, Hard, Impossible
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
    Skeleton() : Enemies("Skeleton", 120, 6, 50) {}//to be altered by dif
};

class Zombie : public Enemies {
public:
    Zombie() : Enemies("Zombie", 210, 10, 80) {}
};

class Dragon : public Enemies {
public:
    Dragon() : Enemies("Dragon", 340, 20, 100) {}
};

class Robot : public Enemies {
public:
    Robot() : Enemies("Robot", 500, 15, 200) {}

};

class Boss : public Enemies {
public:
    Boss() : Enemies("The Dungeon King", 1000, 25, 900) {}
};

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
            "    ==' '==";
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

void RobotDisplay() {
    cout << "     ,     ,\n"
            "    (\\____/)\n"
            "     (_oo_)\n"
            "       (O)\n"
            "     __||__    \\)\n"
            "  []/______\\[] /\n"
            "  / \\______/ \\/\n"
            " /    /__\\\n"
            "(\\   /____\\";
}

void DifStats(Enemies &enemy, Dificultate dif) {
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
            "               #   `\"._(_).       .(_)_.\"'   #";
}

void level2(Player &player, Dificultate dif);

void level1(Player &player, Dificultate dif) {
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

        char option = getch();
        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
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
                return;
            }

            cout << endl;
            Sleep(2000);
            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(2000);
                    clear();

                } else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(2000);
                    clear();

                } else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
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
                        getch();
                        clear();
                        level2(player, dif);
                        return;
                    }
                }
            }
        } else {
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


void level3(Player &player, Dificultate dif);

void level2(Player &player, Dificultate dif) {
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

        char option = getch();
        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
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
                return;
            }

            cout << endl;
            Sleep(2000);
            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(2000);
                    clear();

                } else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(2000);
                    clear();

                } else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
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
                        getch();
                        clear();
                        level3(player, dif);
                        return;
                    }
                }
            }
        } else {
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



void level4(Player &player, Dificultate dif);

void level3(Player &player, Dificultate dif) {
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

        char option = getch();
        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
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
                return;
            }

            cout << endl;
            Sleep(2000);
            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(2000);
                    clear();

                } else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(2000);
                    clear();

                } else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
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
                        getch();
                        clear();
                        level4(player, dif);
                        return;
                    }
                }
            }
        } else {
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


void level5(Player &player, Dificultate dif);

void level4(Player &player, Dificultate dif) {
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

        char option = getch();
        clear();
        switch (option) {
            case '1': {
                monster.life -= player.damage;
                cout << "You dealt " << player.damage << " damage to the " << monster.name << " !" << endl;
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
                return;
            }

            cout << endl;
            Sleep(2000);
            bool inShop = true;
            while (inShop) {
                showShop();
                char buy = getch();

                if (buy == '1' && player.coins >= 20) {

                    player.life += 50;
                    player.coins -= 20;
                    cout << "You bought 50 HP potion. Now you have " << player.life << " HP and " << player.coins
                         << " Coins!"
                         << endl;

                    Sleep(2000);
                    clear();

                } else if (buy == '1' && player.coins <= 20) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
                }
                if (buy == '2' && player.coins >= 30) {

                    player.damage += 10;
                    player.coins -= 30;
                    cout << "You bought 10 attack damage! Now you have " << player.damage << " DMG and " << player.coins
                         << " Coins!" << endl;
                    Sleep(2000);
                    clear();

                } else if (buy == '2' && player.coins <= 30) {
                    cout << "You don't have enough coins :(";
                    Sleep(2000);
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
                        getch();
                        clear();
                        level5(player, dif);
                        return;
                    }
                }
            }
        } else {
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


void level4(Player &player, Dificultate dif);

        void level5(Player &player, Dificultate dif) {
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

                char option = getch();
                clear();
                switch (option) {
                    case '1': {
                        king.life -= player.damage;
                        cout << "You dealt " << player.damage << " damage to the robot!" << endl;
                        break;
                    }
                    case '2': {
                        cout << "You try to run away but failed!" << endl;
                        break;
                    }
                }

                if (king.life <= 0) {
                    cout << "You defeated the " << king.name << "!" << endl;
                    player.coins += king.reward;
                    Sleep(2000);
                    clear();

                    player.life -= king.damage;
                    cout << "The " << king.name << " dealt " << king.damage << " damage to you!" << endl;

                    if (player.life <= 0) {
                        cout << "You were defeated by the " << king.name << "!" << endl;
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
                        getch();
                        clear();
                        startMenu();
                        return;
                    }


                } else {
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

                                showDifMenu();
                                option = getch();
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
                                option = getch();
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
                                option = getch();
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
                        option = getch();
                        if (option == 'q') {
                            startMenu();
                        }
                        break;
                }


                return 0;
            }
        }
