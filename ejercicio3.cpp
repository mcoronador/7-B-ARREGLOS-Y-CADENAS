#include <iostream>
using namespace std;

int main() {
    int P, n;
    
    while (cin >> P >> n) {
        int frecuencia[101] = {0};

        for (int i = 0; i < n; i++) {
            int F;
            cin >> F;
            frecuencia[F]++;
        }

        for (int i = 1; i <= P; i++) {
            cout << i << "-" << frecuencia[i] << endl;
        }
    }

    return 0;
}