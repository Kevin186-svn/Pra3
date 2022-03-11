#include <iostream>

using namespace std;

#ifndef REFEREE_H
#define REFEREE_H

// #include <iostream>
#include "Human.h"
#include "Computer.h"

class Referee
{
    public:
    // int h_op;
    // int c_op;
    //int get(void);
    //void set(int h, int c);
    //void judgment(int h, int c);
    Human p1;
    Computer p2;
    char refGame(Human player1, Computer player2);
};

// int Referee::get(void)
// {
//     return h_op+c_op;
// }

// void Referee::set( int h, int c){
//     h_op = h;
//     c_op = c;

// }

// void Referee::judgment(int h, int c){
//     h_op = h;
//     c_op = c;
//     if(h==c){
//     cout<<"Player choose: "<<h<<endl;
//     cout<<"Computer choose: "<<c<<endl;
//     cout<<"dogfall"<<endl;
//     }else if(h + c == 0){
//     cout<<"Player choose: "<<h<<endl;
//     cout<<"Computer choose: "<<c<<endl;
//     cout<<"Rock Win"<<endl;
//     }
//     else if(h + c == 1){
//     cout<<"Player choose: "<<h<<endl;
//     cout<<"Computer choose: "<<c<<endl;
//     cout<<"Paper Win"<<endl;
//     }
//     else if(h + c == -1){
//     cout<<"Player choose: "<<h<<endl;
//     cout<<"Computer choose: "<<c<<endl;
//     cout<<"Scissors Win"<<endl;
//     }

// }

#endif /* REFREE_H */