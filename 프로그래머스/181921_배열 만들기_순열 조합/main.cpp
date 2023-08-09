#include<iostream>
#include<vector>

using namespace std;

int findNum(int tmp) {
    while (tmp > 0) {
        if (tmp % 10 != 0 && tmp % 10 != 5) {
            return 0;
        }
        tmp /= 10;
    }
    return 1;
}

int main() {
    int l = 10;
    int r = 20;
    vector<int> ret;

    for (int x = l; x <= r; x++) {
        int check = findNum(x);
        if (check) ret.push_back(x);
    }

    if(ret.empty()){
        ret.push_back(-1);
    }


    for (int x = 0; x < ret.size(); x++) {
        cout << ret[x] << " ";
    }

    return 0;
}
