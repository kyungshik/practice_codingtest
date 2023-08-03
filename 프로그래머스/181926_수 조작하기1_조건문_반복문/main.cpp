#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    string control = "wsdawsdassw";

    for (int x = 0; x < control.size(); x++) {
        if (control[x] == 'w') {
            n++;
        } else if (control[x] == 's') {
            n--;
        } else if (control[x] == 'd') {
            n += 10;
        } else if (control[x] == 'a') {
            n -= 10;
        }

    }
    cout << n;
    return 0;
}
