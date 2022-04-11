//Date.h
#pragma once
#include "Triad.h"

class Date
{
private:
	Triad triad;
public:
	Triad GetTriad() const { return triad; }

	void SetTriad(Triad triad) { this->triad = triad; }

	void Init(Triad triad);
	void Display() const;
	void Read();
	string ToString() const;

	bool IsBigger(Date date) const;
	bool IsSmaller(Date date) const;
	bool IsBiggerOrEqual(Date date) const;
	bool IsSmallerOrEqual(Date date) const;
	bool IsEqual(Date date) const;
};

