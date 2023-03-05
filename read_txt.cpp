#include<iostream>
#include<fstream>
using namespace std;
#include<string>

void read_file(string a)
{
	// open file and append data
	fstream myFile;
	myFile.open(a, ios::in);// read mode
	if (myFile.is_open())
	{
		string line;
		while (getline(myFile, line))
		{
			cout << line << endl;
		}
		myFile.close();
	}
}