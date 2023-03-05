#include<iostream>
#include<fstream>
#include <cmath>
using namespace std;
#include<string>

void write_file(string a)
{
	// open file and append data
	fstream myFile;
	myFile.open(a, ios::app); //append
	if (myFile.is_open())
	{
		int length = 360;
		for (size_t i = 0; i < length; i++)
		{
			myFile << sin(i) << endl;
		}
		myFile.close();
	}
}