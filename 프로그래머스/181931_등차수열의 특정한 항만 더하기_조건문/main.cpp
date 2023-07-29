#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a = 3;
    int d = 4;
    vector<bool> included = {true, false, false, true, true};
    int tmp = 0;
    int ret = 0;
    for (int x = 0; x < included.size(); x++) {
        tmp = a + d*x;
        if (included[x]) {
            ret += tmp;
        }
    }
    cout << ret;

    return 0;
}
