//
// Created by kz on 6/7/2023.
//
#include "Player.h"
#include <string>
#ifndef UNTITLED_WARRIOR_H
#define UNTITLED_WARRIOR_H
using namespace player;
namespace warrior {

    class Warrior : public Player {
    public:
        Warrior(std::string nume) : Player(nume, 100, 70, 0) {}
    };

} // warrior

#endif //UNTITLED_WARRIOR_H
