//
// Created by kz on 6/7/2023.
//
#include <string>

#ifndef UNTITLED_ENEMIES_H
#define UNTITLED_ENEMIES_H

namespace enemies {

    class Enemies {
    public:
        std::string name;
        int life;
        unsigned int damage;
        int reward;

        Enemies(std::string _name, int _life, unsigned int _damage, int _reward) : name(_name), life(_life),
                                                                                   damage(_damage),
                                                                                   reward(_reward) {}
    };

} // enemies

#endif //UNTITLED_ENEMIES_H
