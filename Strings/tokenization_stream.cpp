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
    string input;
    getline(cin, input);

    //creating a string stream object.
    stringstream ss(input);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ' '))
    {
        tokens.push_back(token);
    }
    for (string token : tokens)
        cout << token << ",";

    return 0;
}