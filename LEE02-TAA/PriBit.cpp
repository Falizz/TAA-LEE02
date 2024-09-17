#include <bits/stdc++.h>
using namespace std;

int primo(int quantidade){
    if (quantidade == 1){
        return 0;
    }
    if (quantidade <= 3){
        return 1;
    }
    if (quantidade % 2 == 0 || quantidade % 3 == 0){
        return 0;
    }
    for (int i = 5; i * i <= quantidade; i += 2){
        if (quantidade % i == 0){
            return 0;
        }
    }
    return 1;
}

int contarBits (unsigned long long int valor){
    int contador = 0;
    while (valor > 0){
        if (valor & 1ULL){
            contador ++;
        }
        valor >>= 1ULL;
    }
    return contador;
}

int main (void) {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        unsigned long long int v;
        cin >> v;

        int bits1 = contarBits(v);
        int quantidadePrimo = primo(bits1);

        if (quantidadePrimo == 1){
            cout << v << " eh um pribit" << endl;
        } else {
            cout << v << " nao eh um pribit" << endl;
        }
    }

    return 0;
}