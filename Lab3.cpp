#include <iostream>
#include <string>
#include <ostream>
using namespace std;

class Flat
{
public:
	Flat() : area(0), price(0)
	{

	};

	Flat(double p, double a) : price(p), area(a) {};


	friend bool operator == (Flat a1, Flat a2)
	{
		return a1.area == a2.area;
	}

	friend bool operator != (Flat a1, Flat a2)
	{
		return a1.area != a2.area;
	}
	
	friend bool operator > (Flat p1, Flat p2)
	{
		return p1.price > p2.price;
	}

	friend bool operator < (Flat p1, Flat p2)
	{
		return p1.price < p2.price;
	}

	Flat& operator = (Flat a1)
	{
		area = a1.area;
		price = a1.price;
		return *this;
	}

private:
	double price;
	double area;

};



int main()
{
	Flat flat1(50000, 50);
	Flat flat2(60000, 70);
	Flat flat3;
	Flat s = flat3;
	

	if (flat1 == flat2) // сравниваем площадь квартир
	{
		cout << "Area flat 1 == flat 2" << endl;
	}
	else
	{
		cout << "Area flat 1 != flat 2" << endl;
	}

	flat3 = flat2; // присвоение квартире 3 значения квартиры 2

	if (flat2 > flat1) // сравнение цен квартир
	{
		cout << "\nFlat 1 expencive than Flat 2. " << endl;
	}
	else
	{
		cout << "Flat 2 expencive than Flat 1. " << endl;
	}

	return 0;

};