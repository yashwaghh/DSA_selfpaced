#include <iostream>
#include <cmath>
using namespace std;
class solution
{
public:
    void setBits(int n)
    {
        int k = 1;
        int count = 0;
        int limit = floor(log2(n));
        for (int i = 0; i <= limit; i++)
        {
            if (n & k)
                count++;
            n >>= 1;
        }
        cout << count;
    }
};
int main()
{
    solution s1;
    s1.setBits(5);
}