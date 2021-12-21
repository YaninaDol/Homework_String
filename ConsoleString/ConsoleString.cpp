#include <string>
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
	cout << " Enter line : ";
	string str;
	getline(cin,str);

	int kol0 = 0;
	int kol1 = 0;
	int kol2 = 0;
	int kol3 = 0;
	int index = 0;

	while (str.find("Hello", index) < str.length())
	{
		index = str.find("Hello", index);
		kol0++;
		index++;
	}

	for (int i = 0; i < str.length(); i++)
	{

		if (isalpha(str[i])!=0)
		{
			kol1++;
		}
		else if (isdigit(str[i])!=0)
		{
			kol2++;
		}
		else if (str[i] == ',')
		{
			str[i] = '.';
			kol3++;
		}
		else kol3++;
	}

    reverse(str.begin(), str.end());
		

	cout << " Number of letters : " << kol1 << " \n";
	cout << " Number of digits : " << kol2 << " \n";
	cout << " Number of othes simbols : " << kol3 << " \n";
	cout << " Number of word \"Hello\" : "   << kol0 << " \n";
	cout << " Reverse string : " << str;
}

