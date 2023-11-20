#include <iostream>
#include <vector>

using namespace std;

void iteration(vector<vector<int>> tmp, int len) {
    for (int y = 0; y < len; y++) {
        for (int x = 0; x < len; x++) {
            cout << tmp[y][x] << " ";
        }
        cout << endl;
    }
}

bool isBlocked(const vector<vector<int>> &arr, const pair<int, int> &offsetCur, const int i, const int j) {
    const int n = arr.size();
    const int m = arr[0].size();
    const int ii = i + offsetCur.first;
    const int jj = j + offsetCur.second;

    if (ii >= n || ii < 0 || jj >= m || jj < 0) {
        return true;
    }

    if (arr[ii][jj] != 0) {
        return true;
    }

    return false;
}

vector<vector<int>> solution(int n) {
    //2차원 벡터 초기화
    //출처: https://velog.io/@yoonjong/C-2%EC%B0%A8%EC%9B%90-vector-%EC%B4%88%EA%B8%B0%ED%99%94
    vector<vector<int>> answer(n, vector<int>(n, 0));
    const vector<pair<int, int>> offset{{0,  1},
                                        {1,  0},
                                        {0,  -1},
                                        {-1, 0}};

    int i = 0;
    int j = 0;
    int offsetInd = 0;
    auto offsetCur = offset[offsetInd];
    for (int t = 0; t < n * n; ++t) {
        answer[i][j] = t + 1;

        if (isBlocked(answer, offsetCur, i, j)) {
            offsetInd = (offsetInd + 1) % 4;
            offsetCur = offset[offsetInd];
        }

        i += offsetCur.first;
        j += offsetCur.second;
    }
    return answer;
}


int main() {
    int n = 4, m = 5;
    vector<vector<int>> ret1 = solution(n);
    vector<vector<int>> ret2 = solution(m);
    iteration(ret1, n);
    iteration(ret2, m);
    return 0;
}
