#include <iostream>
#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
        int horses[5] = {0,0,0,0,0};
        bool keepGoing = true;

while (keepGoing){

        for (int hn = 0; horses; hn++){
                advance(hn, horses);
                printLane(hn, horses);
                if (isWinner(hn, horses)){
                        keepGoing = false;
                } // end if
        } // end for

        std::cout << "press enter for another turn ";

        } // end while

return 0;
} // end main

void advance(int hn, int* horses){
        int turn = dist(rd);

} // end advance

bool isWinner(int hn, int* horses){
        bool result = false;
        for (int TRACK_LENGTH = 0; horses; hn++){
                if (horses[hn] >= TRACK_LENGTH){
                        result = true;
                } // end if
        } // end for
return result;
} // end isWinner

