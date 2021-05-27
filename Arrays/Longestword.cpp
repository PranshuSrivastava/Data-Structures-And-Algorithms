//Find the longest word in a given sentence.
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, currlen = 0, maxlen = 0, st = 0, maxst, i = 0;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();
    while (1)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
            currlen++;
        if (a[i] == '\0')
            break;
        i++;
    }
    cout << maxlen << endl;
    for (int i = 0; i < maxlen; i++)
        cout << a[i + maxst];
    return 0;
}