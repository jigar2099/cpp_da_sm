#include<iostream>
#include <cmath>
#include<fstream>
using namespace std;
#include<string>
#include<random>
#include<numeric>
void create_file(string a);
void write_file(string a);
void read_file(string a);

int main()
{
	string file_name = "elm.txt";
	ifstream myfile;
	myfile.open(file_name);
	if (myfile) {
		cout << "file exists";
	}
	else {
		cout << "file dosen't exist"<<endl;
		write_file(file_name);
		cout << "file created" << endl;
	}

}