#include "Referee.h"

using namespace std;

// int Referee::get(void)
// {
//     return h_op+c_op;
// }

// void Referee::set( int h, int c){
//     h_op = h;
//     c_op = c;

// }

char Referee::refGame(Human player1, Computer player2){
    //  if(p_h == 'R'){
    //      h_op = 1;
    //  }else if(p_h == 'S'){
    //      h_op = -1;
    //  }else if(p_h == 'P'){
    //      h_op = 0;
    //  }
     p2.move_c = 'R';

     if(player1.move_h == 'R'){
         return 'T';
     }else if(player1.move_h == 'S'){
         return 'L';
     }else if(player1.move_h == 'P'){
         return 'W';
     }
    return 'e';

}


// void Referee::judgment(int h, int c){
//     h_op = h;
//     c_op = c;
//     if(h==c){
//     cout<<"Player choose: "<<h<<endl;
//     cout<<"Computer choose: "<<c<<endl;
//     cout<<"Tie"<<endl;
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