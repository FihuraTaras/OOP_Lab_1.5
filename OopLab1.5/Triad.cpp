//Triad.cpp
#include "Triad.h"
#include <iostream>
#include <sstream>

using namespace std;

void Triad::Init(int first, int second, int third)
{
	SetFirst(first);
	SetSecond(second);
	SetThird(third);
}

void Triad::Display() const
{
	cout << endl;
	cout << ToString();
}

void Triad::Read()
{
	int first;
	int second;
	int third;

	cout << endl;
	cout << "First = ? "; cin >> first;
	cout << "Second = ? "; cin >> second;
	cout << "Third = ? "; cin >> third;
	Init(first, second, third);
}

string Triad::ToString() const
{
	stringstream sout;
	sout << "First is: " << first << endl;
	sout << "Second is: " << second << endl;
	sout << "Third is: " << third << endl;
	return sout.str();
}

bool Triad::IsBigger(Triad triad) const
{
	return first > triad.first || (first == triad.first && second > triad.second) ||
		(first == triad.first && second == triad.second && third > triad.third);
}

bool Triad::IsSmaller(Triad triad) const
{
	return first < triad.first || (first == triad.first && second < triad.second) ||
		(first == triad.first && second == triad.second && third < triad.third);
}

bool Triad::IsBiggerOrEqual(Triad triad) const
{
	return !IsSmaller(triad);
}

bool Triad::IsSmallerOrEqual(Triad triad) const
{
	return !IsBigger(triad);
}

bool Triad::IsEqual(Triad triad) const
{
	return first == triad.first && second == triad.second && third == triad.third;
}
