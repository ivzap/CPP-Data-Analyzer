#pragma once
using namespace std;
#include <string>
#include <iostream>
#include <fstream>


struct Features {


};

class Analyzer{
public:
	string newscompany;
	string title;
	string description;

	void readFile(ifstream &tempIn) { //Only works on tab seperated files
	

		if (tempIn.fail())
			cout << "ERROR: an error occured after open, possible data overflow!" << endl;
		else{


				getline(tempIn, newscompany, '\t');
				getline(tempIn, title, '\t');
				getline(tempIn, description, '\t');


		}


	}



};

void fillCells(ifstream& tempIn, Analyzer cells[], int const CELL_SIZE) { //Fills entire object array instantly, assumes number of objects matches data

	for (int i = 0; i < 10 && !tempIn.fail(); i++) {

		cells[i].readFile(tempIn);

	}


}
