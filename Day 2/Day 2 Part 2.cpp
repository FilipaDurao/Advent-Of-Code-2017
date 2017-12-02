/*
 * Day 2 Part 2.cpp
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

int divisible(string input){

	vector<int> values;
	stringstream ss;
	int temp;

	ss << input;

	while(!ss.eof()){
		ss >> temp;
		values.push_back(temp);
	}

	for(unsigned int i = 0; i < values.size(); i++){
		for(unsigned int j = i+1; j < values.size(); j++){
			if(values.at(i)%values.at(j) == 0){
				return (values.at(i)/values.at(j));
			}
			else if(values.at(j)%values.at(i) == 0){
				return (values.at(j)/values.at(i));
			}
		}
	}

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
		cont += divisible(inputs.at(i));
	}

	cout << cont;

	return 0;
}
