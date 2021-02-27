

#include <iostream>
#include <string>

using namespace std;



int main()
{
	string Firstname, Lastname;
	int age;

	cout << "Please enter first name: ";
	cin >> Firstname;
	cout << "Please enter last name: ";
	cin >> Lastname;
	cout << "Please enter age: ";
	cin >> age;

	cout << "Hello " + Firstname + " " + Lastname + "! " + "You are " << age << +" years old \n";

	

	char userInput;
	int numIterations = 0;
	int numWins = 0;
	do
	{ 
		cout << "Would you like to play again? y/n : " ;
			
		cin >> userInput;
		numIterations++;


		char battleSelection;
		
		
		
		
		
		do
		{
			cout << "Press R for Regular attack: "<< endl;
			cout << "Press S for Special attack: "<< endl;
			cout << "Press H for Healing: " <<endl;
			cout << "Press B to be block: " << endl;
			cout << "Press Q to quit: " << endl;

			cin >> battleSelection;
			
			switch (battleSelection)
			{
			case 'R':
			case 'r':

					cout << "You just preformed a regular attack" << endl;
					break;

			 case 'S':
			 case 's':

				cout << "You just preformed a special attack" << endl;
				break;

			 case 'h':
			 case'H':
				 cout << "You just healed " << endl;
				 break;

			   case'b':
			   case'B':
				   cout << "You preformed a block move" << endl;

				   break;

			   case'q':
			   case'Q':

				   cout << "You are quiting" << endl;

				   break;
			   
			   
			   default:
			   
				   cout << " Invalid Entry" << endl;



				break;
			}


			


		} while (battleSelection != 'q' && battleSelection != 'Q' );




		if (numIterations % 2 == 0)
		{
			cout << " You won! \n \n ";
			numWins++;

		}
		else
		{
			cout << "End of line \n \n ";

		}


		


	} while (userInput != 'n' && userInput != 'N');

	cout << " You won " << numWins << " games " << endl;
	

	
	
	
	return 0;
}







/*if (numIterations % 2 == 0 )
	{
		cout << "You won!";
		numWins++;

	}
	else
	{
		cout << " End of line You lost!";

	}


	cout << "You won " << numWins << " games ";
	*/