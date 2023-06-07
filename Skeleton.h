//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Enemies.h"

#ifndef UNTITLED_SKELETON_H
#define UNTITLED_SKELETON_H
using namespace enemies;

namespace skeleton {

    class Skeleton : public Enemies {
    public:
        Skeleton() : Enemies("Skeleton", 120, 6, 50) {}//to be altered by dif
    };

} // skeleton

#endif //UNTITLED_SKELETON_H
