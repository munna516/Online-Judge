class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long num = x, r;
        long long sum = 0;
        if (x < 0)
            return false;
        else
        {
            while (num != 0)
            {
                r = num % 10;
                sum = (sum * 10) + r;
                num = num / 10;
            }
            if (sum == x)
                return true;
            else
                return false;
        }
    }
};