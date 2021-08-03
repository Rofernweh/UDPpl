#include <iostream>
using namespace std;
//Pedirle al usuario 25 valores y almacenarlos en una una matriz de 5x5. Luego de eso debe imprimirla por pantalla
int main()
{
    int matriz[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cout << "Ingrese un numero: " <<endl;
            cin >> matriz[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            cout << matriz[i][j] << " \n"[j == 5-1];
        }
    }
}