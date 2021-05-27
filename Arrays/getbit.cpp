//Perform basic bit operations
#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{

    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    return (n & ~(1 << pos));
}
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return n | value;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout << getBit(5, 1);
    cout << setBit(5, 1);
    cout << clearBit(5, 1);
    cout << updateBit(5, 1, 1);

    return 0;
}