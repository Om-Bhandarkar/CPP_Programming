//  Reverse Integer

#include <iostream>
using namespace std;
class Solution
{
public:
    int reverseInteger(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            int digit = n % 10;
            ans = (ans * 10) + digit;
            n = n / 10;
        }
        return ans;
    }
};

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    Solution obj;
    int ans = obj.reverseInteger(num);
    cout << ans;
    return 0;
}