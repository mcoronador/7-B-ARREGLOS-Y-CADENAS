#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    // Creamos un arreglo de 1000 vasos y los ponemos todos en 0
    int vasos[1000] = {0}; 

    // Ciclo para recibir cada una de las canicas
    for (int i = 0; i < C; i++) {
        int x;
        cin >> x;    
        vasos[x]++;  
    }

    // Ciclo para mostrar los resultados en la pantalla
    for (int i = 1; i <= N; i++) {
        cout << vasos[i] << endl; 
    }

    return 0;
}