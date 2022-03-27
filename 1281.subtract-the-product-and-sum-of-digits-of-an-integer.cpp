/*
 * @lc app=leetcode id=1281 lang=cpp
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */

// @lc code=start
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int prod = 1, sum = 0;
        do
        {
            int a = n % 10;
            prod *= a;
            sum += a;
            n /= 10;
        } while (n);
        return prod - sum;
    }
};
// @lc code=end
