
#include"Catan.hpp"
#include<array>

class Hexagon{
    public:
        int _num;
        Catan::Resource _resource;

    Hexagon(int num, Catan::Resource resource){
        _num = num;
        _resource = resource;
    }    

};





class Board{
    Hexagon[];
    Board(){
    }

    void setboard(Hexagon& update);

};