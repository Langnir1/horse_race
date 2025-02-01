# horse_race

The idea of the horse race is to have multiple horses racing across a 15 space line. Each play, a horse can move either 0 or 1 spaces. 
The winner is the first horse to reach the end.

#include <cstdlib>
#include <ctime>

int MAX = 15;

<ins>Functions:</ins>

advance();<br/>
printLane();<br/>
isWinner();<br/>
main();<br/>

<ins>main()</ins>

Create an array of 5 with values of 0 <br/>
make keepGoing = True
srand(time(NULL));

while keepGoing; <br/>
	run through horse array; 
	advance horse;
	print horse lane;
	if  isWinnner{
		keepGoing = False
	}
	ask user to keep going	

<ins>void advance(int horseNum, int(pointer) horses)</ins>

coin = rand() % 1; 
if(coin == 1){
<br/>
add coin to horses position in the array

<ins>void printLane(int horseNum, int(pointer) horses)</ins>

loop from zero to MAX<br/>
	if loop index is equal to the horse's value 
		print horse id


<ins>bool isWinner(int horseNum, int(pointer) horses)</ins>

bool result = false;<br/>
if horses[horseNum] >= MAX
	print (congradulations)
	result = true
return result;

