#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    string ans;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] + n > 'Z')
        {
            ans += 'A' + (str[i] + n) - 'Z' - 1;
        }
        else
        {
            ans += str[i] + n;
        }
    }

    cout << ans << endl;
    return 0;
}