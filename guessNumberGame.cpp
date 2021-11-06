//Name: Soumia Umaputhiran 
//Date: September 27, 2019
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
	//Displaying the heading for the game
	cout << "----------------------------------- " << endl;
	cout << "Welcome to Guess that Number! " <<endl;
	cout <<"----------------------------------- " <<endl;
	//Using the random generator to generate a random number every time program is run using the ctime library
	srand(time(NULL));
	//Creating variable to store the number of rounds the game has gone through 
	int round=1;
	//Creating variable to store the number of tries a user has in the game (starting off with 5 tries) 
	int tries=5;
	//Creating a variable to store user's number entered for the game
	int num;
	//Creating a variable to store the range the random generator will generate for each round 
	int randomRange=5;
	
	//Creating a do while loop to keep running until the user has run out of tries (or until tries>0)
	do{
		//Displaying the round the game is currently at
		cout << "Round " << round << endl;
		//Creating a variable to store the correct number (generated randomly) to pass the round 
		int correctNum = rand()%randomRange;
		//For loop to allow users to only play up to five tries 
		for(int i=0;i<5;i++)
		{
			//Asking user to input a number less than the range for that round (using the randomRange variable) 
			cout<<"Guess a number less than " << randomRange << ": ";
			cin >> num;
			//Subtracting one from the 'tries' variable after each user input 
			tries=tries-1;
			/*If statement to check if user input is equal to the randomly generated number. If so the program doubles the range for the random 
			generator (the randomRange variable) and a new correct number will be generated for the next round. Also 'tries' variable is set 
			back to five for next round. The loop breaks and will restart the for loop. */
			if (num == correctNum){
				cout <<"Correct! The number was " << correctNum << endl;
				tries=5;
				randomRange=randomRange*2;
				correctNum = rand()%randomRange;
				break;
			}
			//If user input is not equal to the correct number, then the program displays an error message and user is prompted to enter another guess
			else if (num!=correctNum && tries>0){
				cout <<"Incorrect! try again (" <<tries << " tries remaining)" << endl;
			}
			//If all five tries are used then the program displays message to user indicating that user is out of tries and the game over. 
			else{
				cout<<"Incorrect!  Out of guesses :( " << endl;
				cout << "Game Over!!!" << endl;
				break;
			}
		}
		//Adding one to the round each time the for loop is over for next round 
		round=round+1;
		//Creating a space after each round
		cout << endl;
		
	}while(tries>0); //Setting condition for do while loop to keep running as long as tries>0
	
	return 0;

}