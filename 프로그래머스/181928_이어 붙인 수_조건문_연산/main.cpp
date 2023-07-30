#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> num_list = {5,7,8,3};
    string evenSum;
    string oddSum;
    for (int x = 0; x < num_list.size(); x++) {
        if(num_list[x]%2==0) {
            evenSum += to_string(num_list[x]);
        }
        else{
            oddSum += to_string(num_list[x]);
        }
    }
    cout << stoi(evenSum)+ stoi(oddSum);
}
