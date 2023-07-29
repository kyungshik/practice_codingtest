#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string code = "1abc1abc1abc";
    string ret;
    int mode = 0;

    for (char x: code) {
        if (x == '1') {
            if (mode) {
                mode = 0;
            } else mode = 1;
        }

    }

    cout << ret;
    return 0;
}
