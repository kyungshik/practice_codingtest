#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {0, 1, 2, 4, 3};
    vector<vector<int>> queries = {{0, 4, 2},
                                   {0, 3, 2},
                                   {0, 2, 2}};
    vector<int> answer;
    for (int x = 0; x < queries.size(); x++) {
        int s = queries[x][0];
        int e = queries[x][1];
        int k = queries[x][2];

        vector<int> tmp;
        for (int y = s; y <= e; y++) {
            tmp.push_back(arr[y]);
        }
        sort(tmp.begin(), tmp.end());

        for (int z = 0; z < tmp.size(); z++) {
            if (tmp[z] > k) {
                answer.push_back(tmp[z]);
                break;
            } else if (z == tmp.size() - 1) answer.push_back(-1);

        }
    }

    for (int x = 0; x < answer.size(); x++) {
        cout << answer[x] << " ";
    }

    return 0;
}
