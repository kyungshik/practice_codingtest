#include <iostream>

using namespace std;

int main() {
    int number = 60;
    int n = 2;
    int m = 3;

    if (number % n == 0 && number % m == 0)
        return 1;
    else return 0;
}
