#include "RandomComputer.h"

using namespace std;

char Computer::makeMove_RandomComputer{
     int r;
     r = rand()%3;
     move_rc = r;
     return move_rc;
}