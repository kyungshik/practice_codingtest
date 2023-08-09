#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = {0, 1, 2, 4, 3};
    vector<vector<int >> queries = {{0, 4, 1},
                                    {0, 3, 2},
                                    {0, 3, 3}};
    for (int x = 0; x < queries.size(); x++) {
        int s = queries[x][0];
        int e = queries[x][1];
        int k = queries[x][2];

        for (int x = s; x <= e; x += k) {
            arr[x]++;
        }
    }

    cout << queries.size();
}
