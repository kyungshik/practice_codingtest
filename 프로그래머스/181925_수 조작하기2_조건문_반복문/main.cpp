#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> numLog = {0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1};
    string answer;

    for (int x = 0; x < numLog.size() - 1; x++) {
        int numLogRet = numLog[x + 1] - numLog[x];
        if (numLogRet == 1) {
            answer += "w";
            continue;
        } else if (numLogRet == -1) {
            answer += "s";
            continue;
        } else if (numLogRet == 10) {
            answer += "d";
            continue;
        } else if (numLogRet == -10) {
            answer += "a";
            continue;
        }
    }

    cout << answer;


    return 0;
}
