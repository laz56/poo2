//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Enemies.h"

#ifndef UNTITLED_ROBOT_H
#define UNTITLED_ROBOT_H
using namespace enemies;
namespace robot {

    class Robot : public Enemies {
    public:
        Robot() : Enemies("Robot", 500, 15, 200) {}

    };

} // robot

#endif //UNTITLED_ROBOT_H
