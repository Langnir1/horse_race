#include <cstdlib>
#include <ctime>
#include <iostream>

int MAX = 15;
int horsesNum = 5;

void advance(int horsesNum, int* horses){
	int coin = rand() % 2;
	horses[horsesNum] += coin;
}//end advance function

void printLane(int horsesNum, int* horses){
	for(int i = 0; i < MAX; i++){
		if(i == horses[horsesNum]){
			std::cout << horsesNum;
		} else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}//end printLane function

//bool isWinner(int horsesNum, int* horses);

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;
	srand(time(NULL));

	while (keepGoing){
		for(int i = 0; i < horsesNum; i++){
			advance(i, horses);
			printLane(i, horses);
//			if (isWinnder(i, horses)){
//				keepGoing = false;
//			}
		}
		std::cout << "Enter for another turn";
		std::cin.ignore();
	}
} //end main
