#include <iostream>
using namespace std;
//Cree un programa, que dados dos números, muestre: Su suma Su resta Su multiplicación Su división
int main()
{
	int num1, num2;
	cout << "Ingrese el primer numero: \n";
	cin >> num1;
	cout << "Ingrese el segundo numero \n";
	cin >> num2;

	cout << "Su suma es: " << num1+num2 << endl;
	cout << "Su resta es: " << num1-num2 << endl;
	cout << "Su multiplicacion es: " << num1*num2 << endl;
	cout << "Su division es: " << num1/num2 << endl;

	return 0;

}