#include <bits/stdc++.h>
using namespace std;

int main (void) {

    // Número de casos
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        // valores or bit-a-bit
        unsigned long long int a, b;
        cin >> a;
        cin >> b;

        // resultado
        unsigned long long int y;
        cin >> y;

        unsigned long long int c = y - (a | b);
        if ((a | b | c) == y){
            cout << c << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}