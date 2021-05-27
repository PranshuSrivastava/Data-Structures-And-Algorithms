//Perform basic bit operations
#include <bits/stdc++.h>
using namespace std;
void primesieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 1;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
            cout << i << '\n';
    }
}
void primefactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
        spf[i] = i;
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << '\n';
        n /= spf[n];
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int n;
    cin >> n;
    // primesieve(n);
    primefactor(n);
    return 0;
}