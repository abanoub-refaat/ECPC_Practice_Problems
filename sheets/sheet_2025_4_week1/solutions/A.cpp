#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int arr[5];
    int k;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            if (arr[j] - arr[i] > k)
            {
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
}