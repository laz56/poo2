//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Player.h"
#ifndef UNTITLED_MAGE_H
#define UNTITLED_MAGE_H
using namespace player;
namespace mage {

    class Mage : public Player {
    public:
        Mage(std::string nume) : Player(nume, 60, 140, 0) {}
    };

} // mage

#endif //UNTITLED_MAGE_H
