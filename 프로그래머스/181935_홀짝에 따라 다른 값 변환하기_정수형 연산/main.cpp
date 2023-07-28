#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n = 10;
    int sum = 0;

    //홀수일 때
    if(n%2 != 0)
    {
        for(int x = 1 ;x <=n; x+=2)
        {
            sum += x;
        }
    }
    else //짝수일 때
    {
        for(int x = 2 ; x <= n ; x+=2){
            sum+=x*x;
        }
    }

    return sum;
}
