#include <iostream>
using namespace std;
//Escriba un programa, que solicite al usuario un monto en pesos, y luego indique a cuántas monedas de cada una ($10, $50, $100 y $500) equivale, de forma de minimizar la cantidad de monedas.
int main()
{
	int mon10, mon50, mon100, mon500, monto;
	cout << "Ingrese el monto en pesos: \n";
	cout << "$", cin >> monto;
	if (monto > 0)
	{
		mon500 = monto/500;
		monto -= mon500*500;
		mon100 = monto/100;
		monto -= mon100*100;
		mon50 = monto/50;
		monto -= mon50*50;
		mon10 = monto/10;
		monto -= mon10*10;
	}
	else
	{
	    cout << "Monto erroneo";
	}
cout << monto << " de monto restante"<< endl;
cout << mon500 << " Monedas de $500" << endl;
cout << mon100 << " Monedas de $100" << endl;
cout << mon50 << " Monedas de $50" << endl;
cout << mon10 << " Monedas de $10" << endl;

	return 0;
}