//
// Created by kz on 6/7/2023.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H

namespace player {

    class Player {
    public:
        std::string name;
        int life;
        unsigned int damage;
        int coins = 0;

        Player(std::string _name, int _life, unsigned int _damage, int _coins) : name(_name), life(_life),
                                                                                 damage(_damage),
                                                                                 coins(_coins) {}
    };

} // player

#endif //UNTITLED_PLAYER_H
