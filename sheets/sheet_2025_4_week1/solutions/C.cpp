#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string match = "QAQ";
    int count = 0;
    int match_index = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            for (int k = 0; k < str.length(); k++)
            {
                if (i < j && j < k && str[i] == 'Q' && str[j] == 'A' && str[k] == 'Q')
                    count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}