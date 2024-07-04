
#include "Player.hpp"
#include <vector>


class Catan{
    Player _p1;
    Player _p2;
    Player _p3;


    

    Catan(Player& p1, Player& p2, Player& p3){
        _p1 = p1;
        _p2 = p2;
        _p3 = p3;
    }


    public:
        enum Resource{ wool, grain, lumber, brick, ore};

        void ChooseStartingPlayer(Player&, Player&, Player&);
        void getBoard();
};