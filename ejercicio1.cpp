#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    int a[1000];

    cout << "Ingrese los " << N << " numeros: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    cout << "Secuencia en orden inverso: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << a[i];
        if (i > 0)
            cout << " ";
    }

    return 0;
}