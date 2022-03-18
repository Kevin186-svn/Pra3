#include "Human.h"

using namespace std;

char Human::makeMove(){
     cout<<"Enter move: ";
     char m1;
     cin>>m1;
     move_h = m1;
     return move_h;
}