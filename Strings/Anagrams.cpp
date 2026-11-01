#include <iostream>
#include <string>
using namespace std;
class solution
{
public:
    const int CHAR = 256;

    bool isAnagram(string s1, string s2)
    {
        if (s1.length() != s2.length())
            return false;
        int count[CHAR] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            count[s1[i]]++;
            count[s2[i]]--;
        }
        for (int i = 0; i < 256; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    solution s1;
    bool res = s1.isAnagram("aab", "baa");
    cout << res << endl;
}