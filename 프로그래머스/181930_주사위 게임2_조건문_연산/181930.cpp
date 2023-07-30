#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    // int a = 2; int b = 6; int c = 1;
    // int a = 5; int b = 3; int c = 3;
    int a = 4; int b = 4; int c = 4;
    /*
    1. 세 숫자가 모두 불일치. = a+b+c
    2. 두 숫자 일치, 한 숫자 불일치. = 
    3. 세 숫자 모두 일치.
    */
    if(a == b && a == c)
    {
        cout << (a+b+b)*(a*a+b*b+c*c)*(a*a*a+b*b*b+c*c*c);
    }
    else if(a != b && a != c && b != c)
    {
        cout << a+b+c;
    }
    else
    {
        cout << (a+b+c)*(a*a+b*b+c*c);
    }
    
}