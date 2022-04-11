//Triad.h
#pragma once
#include <iostream>

using namespace std;

class Triad
{
private:
	int first;
	int second;
	int third;
public:
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }
	int GetThird() const { return third; }

	void SetFirst(int first) { this->first = first; }
	void SetSecond(int second) { this->second = second; }
	void SetThird(int third) { this->third = third; }

	void Init(int first, int second, int third);
	void Display() const;
	void Read();
	string ToString() const;

	bool IsBigger(Triad triad) const;
	bool IsSmaller(Triad triad) const;
	bool IsBiggerOrEqual(Triad triad) const;
	bool IsSmallerOrEqual(Triad triad) const;
	bool IsEqual(Triad triad) const;
};

