#include <iostream>
#include <string>
#include <vector>

using namespace std;

int isCipher(int x) {
    if (x >= 1000) {
        return 10000;
    } else if (x >= 100) {
        return 1000;
    } else if (x >= 10) {
        return 100;
    } else if (x >= 1) {
        return 10;
    }
}

int main() {
    int a = 4000;
    int b = 90;
    int aCipher = isCipher(a);
    int bCipher = isCipher(b);
    int combiAB = a * bCipher + b;
    int combiBA = b * aCipher + a;

    if (combiAB > combiBA) {
        cout << combiAB;
    } else cout << combiBA;

    return 0;
}