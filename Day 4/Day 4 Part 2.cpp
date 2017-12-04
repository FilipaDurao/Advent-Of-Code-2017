/*
 * Day 4 Part 2.cpp
 *
 *  Created on: 04/12/2017
 *      Author: filipa
 */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool checkRep(string input){

	stringstream ss;
	ss << input;

	vector<string> words;
	string word;

	while(!ss.eof()){
		ss >> word;
		words.push_back(word);
	}

	for(unsigned int i = 0; i < words.size(); i++){
		sort(words.at(i).begin(), words.at(i).end());
	}

	sort(words.begin(), words.end());

	for(unsigned int i = 0; i < words.size()-1; i++){
		if(words.at(i) == words.at(i+1))
			return false;
	}

	return true; 	// Is valid, no repetitions
}


int main(){

	ifstream in_stream("Input Day 4.txt");
	string input;
	vector<string> inputs;

	while(!in_stream.eof()){
		getline(in_stream, input);
		inputs.push_back(input);
	}

	unsigned int cont = 0;


	for(unsigned int i = 0; i < inputs.size(); i++){
		if(checkRep(inputs.at(i)))
			cont ++;
	}

	cout << cont;

	return 0;
}
