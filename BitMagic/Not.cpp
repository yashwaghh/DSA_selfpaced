#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int x = 5;
    cout << ~(x) << " ";
    cout << bitset<32>(x) << " ";
}