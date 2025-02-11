#include <iostream>
#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

const int TRACK_LENGTH = 15;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
        int horses[5] = {0,0,0,0,0};
        bool keepGoing = true;

while (keepGoing){

        for (int hn = 0; hn < 5;  hn++){
                advance(hn, horses);
                printLane(hn, horses);
                if (isWinner(hn, horses)){
                        keepGoing = false;
                } // end if
        } // end for

        std::cout << "press enter for another turn ";
	std::cin.ignore();

        } // end while

return 0;
} // end main

void advance(int hn, int* horses){
        int turn = dist(rd);
	horses[hn] += turn;

} // end advance

bool isWinner(int hn, int* horses){
        bool result = false;

        if (horses[hn] >= 15){
	       	result = true;
		std::cout << "Horse " << hn << " WINS!" << std::ends;
	}
		
	return result;
} // end isWinner

void printLane(int horseNum, int* horses){

	for (int i = 0; i < TRACK_LENGTH; i++){
		if(horses[horseNum] == i){
			std::cout << horseNum << " ";
		}else{ std::cout << ". ";
		}
	}
	std::cout << std::ends;
}
