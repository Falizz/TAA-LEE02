#include <bits/stdc++.h>
using namespace std;

int main (void){

    int n;
    cin >> n;

    int b;
    cin >> b;
    b = pow(2, b);

    unsigned long long int resultado;

    for (int i = 0; i <  n; i++){
        int v;
        cin >> v;

        resultado = b | v;
        cout << resultado << endl;
    }

    return 0;
}