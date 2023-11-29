/*Name:Uche Hadassah
This program uses pointers to add a single character at the end of an existing string*/
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
	while (*str != '\0')//Loops until the end of the string
	{
		str++;//Increments the pointer position
	}
	*str = a;//Makes the last character a
	str++;//Increment the opointer position 
	*str = '\0';//and makes it the null character to terminate the string
}
