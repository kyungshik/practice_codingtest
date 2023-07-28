#include <iostream>

using namespace std;

int main() {
    string ineq = "<";
    string eq = "=";
    int n = 20;
    int m = 50;

    if (ineq == ">") {
        if (eq == "=") {
            if (n >= m) {
                return 1;
            } else return 0;
        } else {
            if (n > m) {
                return 1;
            } else return 0;
        }
    } else {
        if (eq == "=") {
            if (n <= m) {
                return 1;
            } else return 0;
        } else {
            if (n < m) {
                return 1;
            } else return 0;
        }
    }
}
