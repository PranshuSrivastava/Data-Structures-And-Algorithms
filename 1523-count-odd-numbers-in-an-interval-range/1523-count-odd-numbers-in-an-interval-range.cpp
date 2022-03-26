class Solution
{
public:
    int countOdds(int low, int high)
    {
        int count = (high - low) / 2;
        if (low & 1 || high & 1)
            count++;
        return count;
    }
};
