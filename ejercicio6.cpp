#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    char s[101], letras[101];
    cin.getline(s, 101);

    int n = 0;

    // Guardar solo las letras
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            letras[n] = s[i];
            n++;
        }
    }

    // Ordenamiento burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (letras[j] > letras[j + 1]) {
                char aux = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = aux;
            }
        }
    }

    // Reemplazar las letras en la frase original
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = letras[k];
            k++;
        }
    }

    cout << s;

    return 0;
}