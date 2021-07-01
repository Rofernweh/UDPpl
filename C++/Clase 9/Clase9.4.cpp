#include <iostream>
using namespace std;
//Haga un programa que imprima un triángulo invertido de altura n (ingresado por el usuario)
int main ()
{	
	int n;
	cout << "Ingrese un numero: \n";
	cin >> n;
	for(int i=n; i>0; i--)
	{
		for(int k=0; k<i;k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}