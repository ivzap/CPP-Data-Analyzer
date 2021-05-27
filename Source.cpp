#include <iostream>
#include <fstream>
#include "AnalyzerClass.h"

using namespace std;

int main()
{
	//Create input validation aswell as ask how many objects/cells we want to create of our data(const int SIZE)

	const int SIZE = 10;
	ifstream tempIn;
	string textPath = "C:\\Users\\zapla\\OneDrive\\Desktop\\testData.txt"; //Read our data from here 
	tempIn.open(textPath); //Open file to read

	Analyzer dataCells[10];

	//for (int i = 0; i < 10 && !tempIn.fail(); i++) {

		//dataCells[i].readFile(tempIn);

	//}

	fillCells(tempIn, dataCells, SIZE);
	cout << dataCells[0].title << endl;




	//Close all files to avoid errors
	tempIn.close();
}

