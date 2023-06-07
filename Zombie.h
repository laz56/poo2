//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Enemies.h"

#ifndef UNTITLED_ZOMBIE_H
#define UNTITLED_ZOMBIE_H
using namespace enemies;
namespace zombie {

    class Zombie : public Enemies {
    public:
        Zombie() : Enemies("Zombie", 210, 10, 80) {}
    };

} // zombie

#endif //UNTITLED_ZOMBIE_H
