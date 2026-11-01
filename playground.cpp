#include <iostream>
using namespace std;

class solution
{
public:
    int GCD(int a, int b)
    {
        if (a == b)
            return a;
        if (a > b)
            return GCD(a - b, b);
        else if (b > a)
            return GCD(a, b - a);
    }
};

int main()
{
    class solution s1;
    int res = s1.GCD(36, 60);
    cout 

}