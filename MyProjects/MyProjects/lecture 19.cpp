#include"lecture19.h"
#include<iostream>
#include<fstream>
using namespace std;

void DisplayFileSize(int argc, char** argv);


void EntryPoint19(int argc, char** argv)
{
	DisplayFileSize(argc, argv);
}


void DisplayFileSize(int argc, char** argv)
{
	if (argc < 2)
	{
		cout << "file name was not passed";
		return;
	}
	ifstream infile(argv[1]);
	if (!infile)
	{
		cout << argv[1] << "file cnnot be opened";
		return;
	}


}

