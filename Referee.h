#include <iostream>
#ifndef REFEREE_H
#define REFEREE_H
using namespace std;

#include "Human.h"
#include "Computer.h"

class Referee
{
    public:
    Human p1;
    Computer p2;
    char refGame(Human player1, Computer player2);
};

#endif /* REFREE_H */