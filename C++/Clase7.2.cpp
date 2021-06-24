#include <iostream>
using namespace std;
//
int main()
{
	int num, veces=0, numtotal=0;
	while (veces < 100000)
	{
		cout << "Ingrese un numero: ";
		cin >> num;
		numtotal +=num;
		veces++;
	}
	cout << numtotal;

	return 0;
}