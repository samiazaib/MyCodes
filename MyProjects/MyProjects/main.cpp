#include <iostream>
#include<fstream>
#include <string>
#include "Lecture17.h"
#include "lecture18.h"
using namespace std;
//void main()
//{
//	int i = 0;
//	char c;
//	for (i = 0; i < 256; i++)
//	{
//		c = i;
//		if (c == '\t')
//		{
//			cout << "hey I a tab....";
//		}
//		if (c == '\n')
//		{
//			cout << "hey I got an enter.....";
//		}
//		cout << i << '\t' << c << '\n';
//	}
//	system("pause");
//}

int main(int argc, char** argv)
{
	//EntryPoint();
	/*char str[] = "-123456789jg";
	int val = Myatoi(str);
	cout << val << endl;*/
	//writeFile();
	//readFile();
	//myGetlineFUn();
	//StrTokFun();
	if (argc < 2)
	{
		cout << "no arguments passed:";
	}
	else
	{
		cout << argv[1];
	}
	EntryPoint19();
	cout << endl;
	system("Pause");

}