#include <iostream>
using namespace std;
class Solution
{
public:
    int complementInteger(int n)
    {
        int ele = n;
        int mask = 0;
        if (ele == 0)
        {
            return 1;
        }
        while (ele != 0)
        {
            mask = (mask << 1) | 1;

            ele = ele >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    Solution obj;
    int ans = obj.complementInteger(num);
    cout << ans;
}