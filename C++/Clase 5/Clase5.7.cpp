#include <iostream>
using namespace std;
//Cree un programa que imprima por pantalla las tablas de verdad de AND y OR
int main()
{
	bool p, q, r;
	cout << "Ingrese el valor de verdad de p (true 0/false 1): ";
	cin >> p;
	cout << "Ingrese el valor de verdad de q (true 0/false 1): ";
	cin >> q;
	
	if (p == true  || q == true )
	{
		p = true;
		q = true;
		r = true;
		cout << "true";
	}
	else if (p == true  || q == false)
	{
		p = true;
		q = false;
		r = true;
		cout << "true";
	}
	else if (p == false || q == true )
	{
		p = false;
		q = true;
		r = true;
		cout << "true";
	}
	else if (p == false || q == false)
	{
		p = false;
		q = false;
		r = false;
		cout << "false";
	}
	else if (p == true  && q == true )
	{
		p = true;
		q = true;
		r = true;
	    cout << "true";
	}
	else if (p == true  && q == false)
	{
		p = false;
		q = false;
		r = false;
		cout << "false";
	}
	else if (p == false && q == true )
	{
		p = false;
		q = false;
		r = false;
		cout << "false";
	}
	else if (p == false && q == false)
	{
		p = false;
		q = false;
		r = false;
		cout << "false";
	}

	return 0;
}
