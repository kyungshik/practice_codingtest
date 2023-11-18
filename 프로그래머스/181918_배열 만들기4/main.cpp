#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while (i < arr.size()) {
        if (stk.empty()) {
            stk.push_back(arr[i++]);
            continue;
        }
        if (stk[stk.size() - 1] < arr[i]) {
            stk.push_back(arr[i++]);
        } else {
            stk.pop_back();
        }
    }
    return stk;
}

int main() {
    vector<int> arr = {1, 4, 2, 5, 3};
    vector<int> stl = solution(arr);
    int a;


}