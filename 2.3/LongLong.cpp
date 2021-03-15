#include "LongLong.h"
double LongLong::GetX() const { return x; }
double LongLong::GetY() const { return y; }
void LongLong::SetX(double value) { x = value; }
void LongLong::SetY(double value) { y = value; }
LongLong::LongLong() { x = 0, y = 0; }
LongLong::LongLong(double x = 0, double y = 0)
{
	this->x = x;
	this->y = y;
}
LongLong::LongLong(const LongLong& A)
{
	x = A.GetX();
	y = A.GetY();
}

LongLong& LongLong::operator = (const LongLong& A)
{
	x = A.x;
	y = A.y;
	return *this;
}
ostream& operator << (ostream& out, const LongLong& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong& A)
{
	cout << " C����� ������� = "; in >> A.x;
	cout << " M������ ������� = "; in >> A.y;
	return in;
}
LongLong::operator string() const
{
	stringstream ss;
	ss << " ������ �������: " << x << endl;
	ss << " M������ �������: " << y << endl;
	return ss.str();
}

LongLong& LongLong::operator ++ ()
{
	x++;
	return *this;
}
LongLong& LongLong::operator -- ()
{
	x--;
	return *this;
}
LongLong LongLong::operator ++ (int)
{
	LongLong t(*this);
	y++;
	return t;
}
LongLong LongLong::operator -- (int)
{
	LongLong t(*this);
	y--;
	return t;
}

double operator + (LongLong& A, LongLong& B)
{
	LongLong t2(A.x + A.y);
	return t2.x;
}
double operator * (LongLong& A, LongLong& B)
{
	LongLong t2(A.x * A.y);
	return t2.x;
}

void LongLong::Compare(LongLong& A, LongLong& B) {
	if (A.x == B.x) {
		cout << A.x << "  �������  " << B.x << " \n ";
	}
	if (A.x != B.x) {
		cout << A.x << "  �� �������  " << B.x << " \n ";
	}
	if (A.x > B.x){
		cout << A.x << "  ����� ��  " << B.x << " \n ";
	}
	if (A.x < B.x){
		cout << A.x << "  ����� ��  " << B.x << " \n ";
	}
	if (A.x >= B.x){
		cout << A.x << "  ����� ��� �������  " << B.x << " \n ";
	}
	if (A.x <= B.x){
		cout << A.x << "  ����� ��� �������  " << B.x << " \n ";
	}
}
void LongLong::Compare1(LongLong& A, LongLong& B) {
	if (A.y == B.y) {
		cout << A.y << "  �������  " << B.y << " \n ";
	}
	if (A.y != B.y) {
		cout << A.y << "  �� �������  " << B.y << " \n ";
	}
	if (A.y > B.y) {
		cout << A.y << "  ����� ��  " << B.y << " \n ";
	}
	if (A.y< B.y) {
		cout << A.y << "  ����� ��  " << B.y << " \n ";
	}
	if (A.y >= B.y) {
		cout << A.y << "  ����� ��� �������  " << B.y << " \n ";
	}
	if (A.y <= B.y) {
		cout << A.y << "  ����� ��� �������  " << B.y << " \n ";
	}
}
