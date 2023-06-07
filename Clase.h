//
// Created by kz on 6/5/2023.
//

#ifndef POO2_CLASE_H
#define POO2_CLASE_H

namespace clase {

    class Player {
    public:
        std::string name;
        int life;
        unsigned int damage;
        int coins = 0;

        Player(std::string _name, int _life, unsigned int _damage, int _coins) : name(_name), life(_life), damage(_damage),
                                                                                 coins(_coins) {}
    };

    class Enemies {
    public:
        std::string name;
        int life;
        unsigned int damage;
        int reward;

        Enemies(std::string _name, int _life, unsigned int _damage, int _reward) : name(_name), life(_life), damage(_damage),
                                                                                   reward(_reward) {}
    };

    enum class Dificultate {
        Easy, Medium, Hard, Impossible
    };


    class Warrior : public Player {
    public:
        Warrior(std::string nume) : Player(nume, 100, 70, 0) {}
    };

    class Mage : public Player {
    public:
        Mage(std::string nume) : Player(nume, 60, 140, 0) {}
    };

    class Medic : public Player {
    public:
        Medic(std::string nume) : Player(nume, 240, 30, 0) {}
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


} // clase

#endif //POO2_CLASE_H