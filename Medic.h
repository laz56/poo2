//
// Created by kz on 6/7/2023.
//
#include <iostream>
#include "Player.h"
#ifndef UNTITLED_MEDIC_H
#define UNTITLED_MEDIC_H

namespace medic {

    class Medic : public Player {
    public:
        Medic(std::string nume) : Player(nume, 240, 30, 0) {}
    };

} // medic

#endif //UNTITLED_MEDIC_H
