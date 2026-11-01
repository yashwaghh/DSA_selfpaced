#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = 1;
    int res = (x & ((~x) + 1));
    cout << log2(res) + 1 << " ";
}