#include <iostream>
#include <string>
using namespace std;
class solution
{
public:
    bool isSubsequence(string s1, string s2)
    {
        int i = 0;
        int j = 0;
        int s2len = s2.length();
        while (i != s1.length())
        {
            if (s1[i] == s2[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if (s2.length() == j)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    solution s1;
    bool res = s1.isSubsequence("GeeksforGeeks", "Gs");
    cout << res << endl;
}