//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Enemies.h"

#ifndef UNTITLED_DRAGON_H
#define UNTITLED_DRAGON_H
using namespace enemies;
namespace dragon {

    class Dragon : public Enemies {
    public:
        Dragon() : Enemies("Dragon", 340, 20, 100) {}
    };

} // dragon

#endif //UNTITLED_DRAGON_H
