# horse_race

The idea of the horse race is to have multiple horses racing across a 15 space line. Each play, a horse can move either 0 or 1 spaces. 
The winner is the first horse to reach the end.

#include <cstdlib>
#include <ctime>

int MAX = 15;

<ins>Functions:</ins>
advance()
printLane()
isWinner()
main()

<ins>main()</ins>
Create an array of 5 with values of 0
make keepGoing = True

while keepGoing;
	run through horse array
	advance horse
	print horse lane
	if  isWinnner
		keepGoing = False
	

<ins>void advance(int horseNum, int(pointer) horses)</ins>
srand(time(NULL));
coin = rand() % 1; 
if(coin == 1){
	
}

<ins>void printLane(int horseNum, int(pointer) horses)</ins>

loop from zero to MAX
	if loop index is equal to the horse's value



<ins>bool isWinner(int horseNum, int(pointer) horses)</ins>
bool result = false;
if horses[horseNum] >= MAX
	print (congradulations)
	result = true
return result;

