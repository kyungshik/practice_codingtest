#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a = 2;
    int b = 91;

    int combiAB = stoi(to_string(a)+ to_string(b));
    int calAB = 2 * a * b;
    cout << max(combiAB, calAB);

    return 0;
}
