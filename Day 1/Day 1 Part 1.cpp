/*
 * Day 1 Part 1.cpp
 *
 *  Created on: 01/12/2017
 *      Author: filipa
 */


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	ifstream in_stream("Input Day 1.txt");
	string input;
	getline(in_stream, input);

	unsigned int counter = 0;

	for(unsigned int i = 0; i < input.size(); i++){

		if(i == input.size()-1){
			if(input.at(0) == input.at(input.size()-1)){
				counter += input.at(input.size()-1)-48;
			}
			break;
		}

		if(input.at(i) == input.at(i+1)){
			counter += input.at(i)-48;
		}
	}

	cout << counter;

	return 0;
}

