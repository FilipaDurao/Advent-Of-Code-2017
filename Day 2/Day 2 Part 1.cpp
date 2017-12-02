/*
 * Day 2 Part 1.cpp
 *
 *  Created on: 02/12/2017
 *      Author: filipa
 */


#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int findMax(string input){
	int max, temp;
	stringstream ss;

	ss << input;
	ss >> max;

	while(!ss.eof()){
		ss >> temp;

		if(temp > max)
			max = temp;
	}

	return max;
}

int findMin(string input){
	int min, temp;
	stringstream ss;

	ss << input;
	ss >> min;

	while(!ss.eof()){
		ss >> temp;

		if(temp < min)
			min = temp;
	}

	return min;
}


int main(){

	ifstream in_stream("Input Day 2.txt");
	string input;
	vector<string> inputs;

	while(!in_stream.eof()){
		getline(in_stream, input);
		inputs.push_back(input);
	}

	int cont = 0;


	for(unsigned int i = 0; i < inputs.size(); i++){
		cont += (findMax(inputs.at(i)) - findMin(inputs.at(i)));
	}

	cout << cont;

	return 0;
}

