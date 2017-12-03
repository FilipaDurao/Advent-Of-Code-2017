/*
 * Day 3 Part 2.cpp
 *
 *  Created on: 03/12/2017
 *      Author: filipa
 */


#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;


unsigned int matrix[100][100];

void print(){
	for(unsigned int i = 0; i < 100; i++){
		cout << endl;
		for(unsigned int j = 0; j < 100; j++){
			cout << "\t" << matrix[i][j] << "  ";
		}
	}
}

int main(){

	matrix[50][50] = 1;

	unsigned int input = 312051;
	unsigned int cont = 1; 	// To know in which number we are
	int x=50, y=50;			// To know the coordinates where we are
	char direction = 'E';	// Can be N, S, E, O

	for(unsigned int i = 1; i < 40; i++){

		for(unsigned int j = 0; j < i; j++){

			if(direction == 'E'){
				y++;
			}

			else if(direction == 'N'){
				x--;
			}

			else if(direction == 'O'){
				y--;
			}

			else if(direction == 'S'){
				x++;
			}

			matrix[x][y] = matrix[x-1][y] + matrix[x+1][y] + matrix[x][y-1] + matrix[x][y+1] + matrix[x+1][y+1] + matrix[x+1][y-1] + matrix[x-1][y+1] + matrix[x-1][y-1];

			if(matrix[x][y] > input){
				cout << matrix[x][y];
				return 0;
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

		for(unsigned int j = 0; j < i; j++){

			if(direction == 'E'){
				y++;
			}

			else if(direction == 'N'){
				x--;
			}

			else if(direction == 'O'){
				y--;
			}

			else if(direction == 'S'){
				x++;
			}

			matrix[x][y] = matrix[x-1][y] + matrix[x+1][y] + matrix[x][y-1] + matrix[x][y+1] + matrix[x+1][y+1] + matrix[x+1][y-1] + matrix[x-1][y+1] + matrix[x-1][y-1];

			if(matrix[x][y] > input){
				cout << matrix[x][y];
				return 0;
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
	}

	//print();
}













