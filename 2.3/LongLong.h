#pragma once
#include <iostream>
#include <sstream>
#include <string>

#pragma pack(1)

using namespace std;

class LongLong
{
	double x, y;
public:
	double GetX() const;
	double GetY() const;
	void SetX(double value);
	void SetY(double value);
	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);
	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;
	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);
	void Compare(LongLong& A, LongLong& B);
	void Compare1(LongLong& A, LongLong& B);
	friend double operator * (LongLong&, LongLong&);
	friend double operator + (LongLong&, LongLong&);
};
