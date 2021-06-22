#include <iostream>
using namespace std;
//Calcular cuántos dígitos tiene un número entero n dado.
int main()
{
    int num, temp;
    int contador = 0;

    cout << "Ingresa un numero: ";
    cin >> num;
    temp = num;
    
    while(temp != 0) 
    {
        contador++;
        temp /= 10;
    }

    cout << endl << "El numero total de digitos en " << num << " es: "  << contador;

    return 0;
}