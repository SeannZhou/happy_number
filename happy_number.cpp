/*
	Sean Zhou
	Description: Happy Numbers 
*/

#include<iostream>
#include<cmath>	//For squaring

using namespace std;
int main() {
	int num;	//number being broken down
	int digit;	//adds to the sum
	int sum = 0;	//check for happy number
	int again = 0;

		cout << "Please insert a number to see if it's happy or not\n";		//State the prompt
		cin >> num;
	
			while(sum != 1 && sum != 4) {			//While NOT a happy number	
					if(sum != 0)	//To stop the exchange in the beginning so num won't equal 0	
					{ 
						num = sum;	//To exchange the value of sum to num
					}
					sum = 0;
						while(num != 0)			//Breaking the number down
							{	
								digit = num%10;		
								sum += pow(digit, 2);		
								num = num / 10;
							}
				}	

			if(sum == 1)		//Result!!!
				cout << "Your number is a happy number\n";
			else if(sum == 4)
				cout << "Your number is not a happy number\n";

	return 0;
}

/*
	Test Data:
	Happy numbers: 7, 888
	Unhappy numbers: 125, 71
*/
