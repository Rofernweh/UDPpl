#include <iostream>
#include <cmath>
using namespace std;
/*Se pide crear un programa que, dado un número "p", representará la precisión,
calcule la sumatoria de los primeros p términos de la serie anterior. 
Luego, su programa debe multiplicar ese resultado por seis y calcular su raíz cuadrada, llegando así a una cercana aproximación de pi.
Hint: Usando
  #include <math.h>  */

int main() {

    int p;
    cout << "ingrese un numero \n";
    cin >> p;
    int aux=1;
    float sumatoria = 0;
    while (p>0 && aux<=p )
    {
        sumatoria += (1/(exp2(aux)));
        aux++;
    }
    cout << sqrt(sumatoria*6);

    return 0;
}