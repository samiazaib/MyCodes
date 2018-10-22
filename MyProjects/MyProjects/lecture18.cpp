#include "lecture18.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeFile()
{
	ofstream myWriteFile;
	char choice;
	char name[15];
	float salary;

	myWriteFile.open("SalaryInfo.txt", ios::out );
	if (!myWriteFile)
	{
		cout << "File can not be open";
		return;
	}

	do {
		 
		cout << "Enter name of employee:";
		cin >> name;
		cout << "Enter salary:";
		cin >> salary;
		myWriteFile << name << "\t" << salary ;
		cout << "Enter Y if you want to enter another: ";
		cin >> choice;
	
	} while (choice == 'y' || choice == 'Y');

	myWriteFile.close();
}

void readFile()
{
	ifstream myReadFile;
	char name[10];
	float salary;
	myReadFile.open("Salaryinfo.txt");
		if (!myReadFile)
		{
			cout << "File cannot be open";
			return;
		}

		while(!myReadFile.eof())
		{
			/*myReadFile >> name >> salary;
			cout << name <<"\t"<< salary;
			cout << endl;*/
		}
		myReadFile.close();
}
