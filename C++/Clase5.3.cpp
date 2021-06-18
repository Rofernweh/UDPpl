#include <iostream>
using namespace std;
//Escriba un programa que reciba una letra e indique si es una vocal o no
int main()
{
	char letra;
	char a = 'a';
	char e = 'e';
	char i = 'i';
	char o = 'o';
	char u = 'u';
	cout << "Ingrese una letra: ";
	cin >> letra;
	if (letra == a || letra == e || letra == i || letra == o || letra == u)
	{
		cout << "Es una vocal";
	}
	else 
	{
		cout << "No es una vocal";
	}


	return 0;
}