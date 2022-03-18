#include "Referee.h"

using namespace std;


char Referee::refGame(Human player1, Computer player2){
     char player1_move = player1.makeMove();
     p2.move_c = 'R';

     if(player1.move_h == 'R'){
         return 'T';
     }else if(player1.move_h == 'S'){
         return 'L';
     }else if(player1.move_h == 'P'){
         return 'W';
     }else{
          return 'E';
     }
    return 'e';

}
