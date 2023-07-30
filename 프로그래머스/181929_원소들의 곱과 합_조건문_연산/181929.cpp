#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector <int> num_list;
    // num_list.push_back(3);
    // num_list.push_back(4);
    // num_list.push_back(5);
    // num_list.push_back(2);
    // num_list.push_back(1);
    num_list.push_back(5);
    num_list.push_back(7);
    num_list.push_back(8);
    num_list.push_back(3);

    int sum_ret = 0;
    int mul_ret = 1;
    for(int x = 0 ; x < num_list.size() ; x++)
    {
        sum_ret += num_list[x];
        mul_ret *= num_list[x];
    }
    sum_ret*=sum_ret;

    if(mul_ret < sum_ret )
    // return 1;
    cout << 1;
    else cout << 0; 
    // return 0;
}