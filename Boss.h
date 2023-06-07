//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Enemies.h"

#ifndef UNTITLED_BOSS_H
#define UNTITLED_BOSS_H
using namespace enemies;
namespace boss {

    class Boss : public Enemies {
    public:
        Boss() : Enemies("The Dungeon King", 1000, 25, 900) {}
    };

} // boss

#endif //UNTITLED_BOSS_H
