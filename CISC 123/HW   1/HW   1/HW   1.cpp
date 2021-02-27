


#include <iostream>
#include <string>

using namespace std;


int main()
{

	int moneyCounter = 0;
	char optionSelect;
	const double salesTax = .065;

	int enteredSales;
	int refundData;

	
	int RunTotal = 0;
	int dailyTotal = 0;

   do
	{

	   
	 


	   cout << "Press (S)ale Calculator " << endl;
	   cout << "Press (R)efund Calculator" << endl;
	   cout << "Press (Q)uit press Q " << endl;


		   cin >> optionSelect;

	   switch (optionSelect)
	   {
	   case 's':
	   case'S':

		   cout << "Please enter total sales: ";
		   cin >> enteredSales;

	
		   moneyCounter +=  enteredSales * salesTax + enteredSales;
	
		   cout << moneyCounter  <<"$ is the total" << endl;

		   break;

	   case'R':
	   case'r':

		   cout << "Please enter refund amount: ";
		   cin >> refundData;

		   moneyCounter = moneyCounter - refundData;
		   cout << moneyCounter << "$ refunded " << endl;

		   if (moneyCounter < 0)
		   {
			   cout << "Refund cant be issued please call Manager \n " << endl;
				   
		   }
		 
			   break;

	   case 'q':
	   case'Q':


		

		   cout << "You are quiting! You made " << moneyCounter  << "$ in sales " << endl;

		  
	
		 
		   
		   break;

	   default:
		   cout << "Invalid  Entry " << endl;
		   
			  

		   break;
	   }

	  

	  


	} while (optionSelect != 'q' && optionSelect != 'Q');

	





    
}

