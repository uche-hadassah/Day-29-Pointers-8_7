/*Write a void function that uses pointers to add a single character at the end of an existing 
C-string. The string and the character should be taken as parameters. For example if str
contains the C-string Hello World the function call addChar(str, ‘!’) should 
change the string str to Hello World!*/
#include<iostream>
#include<cstring>
using namespace std;
void addChar(char*, char);
int main()
{
	char Str[100];
	char x;
	cout << "Enter a string:";
	cin.getline(Str, 100);
	cout << "Enter the charcter you wish to add at the end of the string:";
	cin >> x;
	addChar(Str, x);
	cout << "The new string is:" << Str;
}

void addChar(char* str, char a)
{
	while (*str != '\0')
	{
		str++;
	}
	*str = a;
	str++;
	*str = '\0';
}
