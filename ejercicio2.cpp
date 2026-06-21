#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string palabra;
        cin >> palabra;

        bool esPalindromo = true;
        int n = palabra.size();

        for (int i = 0; i < n / 2; i++) {
            if (palabra[i] != palabra[n - 1 - i]) {
                esPalindromo = false;
                break;
            }
        }

        if (esPalindromo)
            cout << "P" << endl;
        else
            cout << "NP" << endl;
    }

    return 0;
}