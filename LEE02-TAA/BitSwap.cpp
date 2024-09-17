#include <bits/stdc++.h>
using namespace std;

int main (void){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        unsigned long long int n;
        cin >> n;
        unsigned long long int p, q;
        cin >> p >> q;
        unsigned long long int bitTemp;

        unsigned long long int bitp = (n >> p) & 1;
        unsigned long long int bitq = (n >> q) & 1;

        bitTemp = 1ULL << p;
        bitTemp = ~bitTemp;
        n = n & bitTemp;

        bitTemp = 1ULL << q;
        bitTemp = ~bitTemp;
        n = n & bitTemp;

        bitTemp = bitq << p;
        n = n | bitTemp;

        bitTemp = bitp << q;
        n = n | bitTemp;

        cout << n << endl;
    }

    return 0;
}