#include <iostream>
using namespace std;
int main() {
    int n, i, j, t, x, c;
    bool scambio;

    cout << "Quali sono i valori da inserire?" << endl;
    cin >> n;
    int v[n];

    i = 0;
    while (i < n) {
        v[i] = rand() % (n * 10);
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (j <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - 1) {
            if (v[j] > v[j + 1]) {
                scambio = true;
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "Il" << i + 1 << "numero è" << v[i] << endl;
        i = i + 1;
    }
    cout << "Che valore vuoi trovare?" << endl;
    cin >> x;
    indice= 1;
    i = 0;
    c = 0;
    while (i <= n - 1 && indice == 1) {
        c = c + 1;
        if (v[i] == x) {
            indice = i;
        }
        i = i + 1;
    }
    if (indice == -1) {
        cout << "Non è stato trovato nessun numero" << endl;
    } else {
        cout << "Il numero è stato trovato nella cella" << indice << " sono stati fatti" << c << "controlli" << endl;
    }
    int inizio, medio, fine;

    indice = 1;
    inizio = 0;
    fine = n - 1;
    c = 0;
    while (indice == -1 && inizio <= fine) {
        medio = (int) (inizio + (double) (fine - inizio) / 2);
        c = c + 1;
        if (v[medio] == x) {
            indice = medio;
        } else {
            c = c + 1;
            if (x > v[medio]) {
                inizio = medio + 1;
            } else {
                fine = medio - 1;
            }
        }
    }
    cout << "Il valore è stato trovato nella cella" << indice << "in" << c << "tentativi" << endl;
    return 0;
}

