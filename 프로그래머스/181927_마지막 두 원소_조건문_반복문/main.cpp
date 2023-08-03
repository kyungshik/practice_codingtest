#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
//    vector<int> num_list = {2, 1, 6};
    vector<int>num_list={5,2,1,7,5};
    vector<int> answer;

    answer.resize(num_list.size());
    copy(num_list.begin(), num_list.end(), answer.begin());

    if (num_list[num_list.size() - 1] > num_list[num_list.size() - 2]) {
        answer.push_back(num_list[num_list.size() - 1] - num_list[num_list.size() - 2]);
    } else {
        answer.push_back(num_list[num_list.size() - 1] * 2);
    }

    for(int x =0 ;x < answer.size();x++)
    {
        cout << answer[x] << " ";
    }

    return 0;
}
