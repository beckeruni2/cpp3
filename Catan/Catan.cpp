#ifndef CATAN_H
#define CATAN_H

#include <iostream>
#include "Catan.hpp"




int main(){
}





void Catan::ChooseStartingPlayer(Player& p1, Player& p2, Player& p3){
    int random = rand();
    if (random % 3 == 0){
        return p1.printPlayerName();
    }
    if (random % 3 == 1){
        return p2.printPlayerName();
    }
    return p3.printPlayerName();
}


#endif