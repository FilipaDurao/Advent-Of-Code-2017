/*
 * Day 5 Part 1.cpp
 *
 *  Created on: 05/12/2017
 *      Author: filipa
 */


#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){

	ifstream in_stream("Input Day 5.txt");
	string input;
	vector<int> inputs;

	while(!in_stream.eof()){
		getline(in_stream, input);
		inputs.push_back(stoi(input));
	}

	int cont = 0, temp, i = 0;


	while(i < inputs.size()){

		temp = inputs.at(i);
		inputs.at(i) ++;
		i += temp;
		cont ++;
	}

	cout << cont << endl;

	return 0;
}
