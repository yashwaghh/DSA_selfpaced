#include <iostream>
using namespace std;
class solution
{
public:
    bool isSetKth(int n, int k)
    {
        bool res = ((1 >> (k - 1)) & n);
        return res;
    }
};

int main()
{
    class solution s1;
    bool final = s1.isSetKth(5, 1);
    cout << final << endl;
}