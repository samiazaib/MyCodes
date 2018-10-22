#include "Lecture17.h"
#include <iostream>
#include <string>

using namespace std;

void EntryPoint()
{
	cout << "Hello" << endl;
	int c = 4;
	int *ptr = &c;
	cout << *ptr << '\t' << &c << '\t' << c << '\n';
	int num = atoi("67ac");
	cout << num;
}
int Myatoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	if (sign = '-')
	{
		sign = -1;
		str++;
	}
	for (int i = 0; str[i] != '\0'; i++)
	{
		/*if (sign = '-')
		{
		sign = -1;
		str++;
		}*/
		if (isdigit(str[i]))
		{
			result = result * 10 + str[i] - '0';
		}
		else
			break;
	}
	return sign * result;
}

void myGetlineFUn()
{
	string str;
	cout << "PLease input your message:";
	getline (cin, str);
	cout << str << "\n";

}

int StrTokFun()
{
    char str[] = "these are tokens";
	rsize_t strmax = sizeof str;
	const char *delim = ",";
	char *nextTok;
	
	cout << "following are the tokens:" << "\n";
	char* token;
	token = strtok_s(str, &strmax,delim);
	while (token)
	{
		cout << token << "\n";
		token = strtok(NULL, delim);
	}
	return 0;
}