#include <string>
#include <iostream>

using namespace std;
class Player{
    string _name;

    public:

        Player(string name){
            _name = name;
        }

        Player(){

        }   
        void printPlayerName(){
            cout<<"first player is: " << _name << endl;
        }
};