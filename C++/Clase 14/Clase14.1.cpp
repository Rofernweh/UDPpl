#include <iostream>
/*Hacer un código que pida un n, y luego produzca la matriz siguiente, y la imprima por pantalla (en el ejemplo n=5): 
(Triangulo superior positivo, inferior negativo, Diagonal 0)*/
using namespace std;

int main()
{
    int n, m;
    cout << "Ingrese un numero: \n";
    cin >> n;
    m=n;
    int matriz[n][m];
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if (i<j)
            {
                matriz[i][j] = 1;
            }
            else if (i>j)
            {
                matriz[i][j] = -1;
            }
            else if (i==j)
            {
                matriz[i][j] = 0;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<0; j++)
        {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}