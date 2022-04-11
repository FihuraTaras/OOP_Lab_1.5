//Date.cpp
#include "Date.h"
#include <iostream>
#include <sstream>

using namespace std;

void Date::Init(Triad triad)
{
	SetTriad(triad);
}

void Date::Display() const
{
	triad.Display();
}

void Date::Read()
{
	Triad triad;
	cout << "Triad = ? " << endl;
	triad.Read();
	Init(triad);
}

string Date::ToString() const
{
	return triad.ToString();
}

bool Date::IsBigger(Date date) const
{
	return triad.IsBigger(date.triad);
}

bool Date::IsSmaller(Date date) const
{
	return triad.IsSmaller(date.triad);
}

bool Date::IsBiggerOrEqual(Date date) const
{
	return triad.IsBiggerOrEqual(date.triad);
}

bool Date::IsSmallerOrEqual(Date date) const
{
	return triad.IsSmallerOrEqual(date.triad);
}

bool Date::IsEqual(Date date) const
{
	return triad.IsEqual(date.triad);
}