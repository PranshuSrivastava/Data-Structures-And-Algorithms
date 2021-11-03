#include <bits/stdc++.h>
using namespace std;
void replace_space(char *str)
{
    int spaces = 0, n = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            spaces++;
    }
    int index = n + 2 * spaces;
    str[index] = '\0';
    for (int i = n - 1; i >= 0; i++)
    {
        if (str[i] == ' ')
        {
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index -= 3;
        }
        else
        {
            str[index - 1] = str[i];
            index--;
        }
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

    char input[1000];
    cin.getline(input, 1000);
    replace_space(input);
    cout << input;
    return 0;
}