// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <regex>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void logIn();
void verifyUser(string);
void getCommand(string);

int generateSalt();

int main()
{
	srand((unsigned)time(NULL));

	ofstream file;
	


    return 0;
}

void logIn()
{
	string input;
	cout << "Username: ";
	getline(cin, input);
}

//only called in initialisation  
void verifyUser(string user)
{
	ifstream file;
	//TODO: add checking for if passwd doesn't exist (assuming it's not provided at the beginning)
	file.open("passwd.txt");
}

void getCommand(string input)
{
	getline(cin, input);

	//TODO: types of commands
}

int generateSalt()
{
	//TODO: 
	return (rand() % 100000000 + 10000000);
}