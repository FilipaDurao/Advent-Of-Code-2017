/*
 * Day 3 Part 1.cpp
 *
 *  Created on: 03/12/2017
 *      Author: filipa
 */


#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int directions(){

	unsigned int input = 312051;
	unsigned int cont = 1; 	// To know in which number we are
	int x=0, y=0;			// To know the coordinates where we are
	char direction = 'E';	// Can be N, S, E, O

	for(unsigned int i = 1; i < 400000; i++){

		for(unsigned int j = 0; j < i; j++){

			if(direction == 'E'){
				x ++;
			}

			else if(direction == 'N'){
				y ++;
			}

			else if(direction == 'O'){
				x --;
			}

			else if(direction == 'S'){
				y --;
			}

			cont ++;
			cout << cont << "   (" << x << ", " << y << ") \n";


			if(cont == input){
				return abs(x)+abs(y);
			}

		}


		if(direction == 'E'){
			direction = 'N';
		}

		else if(direction == 'N'){
			direction = 'O';
		}

		else if(direction == 'O'){
			direction = 'S';
		}

		else if(direction == 'S'){
			direction = 'E';
		}

		cout << direction << endl;


		for(unsigned int a = 0; a < i; a++){

			if(direction == 'E'){
				x ++;
			}

			else if(direction == 'N'){
				y ++;
			}

			else if(direction == 'O'){
				x --;
			}

			else if(direction == 'S'){
				y --;
			}

			cont ++;
			cout << cont << "   (" << x << ", " << y << ") \n";


			if(cont == input){
				return abs(x)+abs(y);
			}

		}

		if(direction == 'E'){
			direction = 'N';
		}

		else if(direction == 'N'){
			direction = 'O';
		}

		else if(direction == 'O'){
			direction = 'S';
		}

		else if(direction == 'S'){
			direction = 'E';
		}

		cout << direction << endl;

	}


}


int main(){
	cout << directions();
}










