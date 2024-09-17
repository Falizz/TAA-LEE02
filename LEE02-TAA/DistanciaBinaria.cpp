#include <bits/stdc++.h>
using namespace std;

int main (void){

    // Quantidade de casos
    int t;
    cin >> t;

    // Entrada de todos os valores de x e y
    for (int i = 0; i < t; i++){
        unsigned long long int x;
        cin >> x;
        unsigned long long int y;
        cin >> y;
        // Calculo da distância
        unsigned long long int dist = x ^ y;
        // Contar a distância entre os bits
        int contador = 0;
        while (dist > 0){
            contador += dist & 1;
            dist >>= 1;
        }
        cout << contador << endl;
    }
    return 0;
}