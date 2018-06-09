// ConsoleApplication2.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;
int b = 0;
class user
{
	int no;
public:
	user()
	{
		b++;
	    cout << "This is constructor of user" << b << endl;
		
	}
};
class controller
{
public:
	virtual void time()
	{}

};
class rooms
{



};
class bathroom{};
class kitchen{};
class speaker{};
class fans {};
class ac{};
class tv{};
class alarm{};

int main()
{
	int no;
	user *c;
	cout << "Enter the no. of user";
	cin >> no;
	c = new user [no];
	
	_getch();
    return 0;
}

