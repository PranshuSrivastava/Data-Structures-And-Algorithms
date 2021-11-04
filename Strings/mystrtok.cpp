#include <bits/stdc++.h>
using namespace std;
char *mystrtok(char *str, char delim)
{
    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }
    if (input == NULL)
        return NULL;
    static char *token = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            token[i] = input[i];
        }
        else
        {
            token[i] = '\0';
            input = input + i + 1;
            return token;
        }
    }
    token[i] = '\0';
    input = NULL;
    return token;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    char input[1000];
    cin.getline(input, 1000);
    char *token = mystrtok(input, ' ');
    while (token != NULL)
    {
        cout << token << endl;
        token = mystrtok(NULL,' ');
    }
    return 0;
}