#include <iostream>
using namespace std;
//Imprimir en pantalla los múltiplos de 2 y los múltiplos de 3 menores que 1000.
int main()
{
	int n;
	int i=0;
	while (i<=1000)
	{
		if(i % 2 == 0 || i % 3 == 0)
		{
			cout << i <<endl;
			i++;
		}
		else 
		{
			i++;
		}
	}

	return 0;
}