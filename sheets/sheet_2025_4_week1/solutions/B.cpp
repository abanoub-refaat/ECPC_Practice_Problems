#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = L + i;
    }

    int total = 0;

    for (int i = 0; i < N; i++)
    {
        total += arr[i];
    }

    int answer = abs(arr[0]);
    int index = 0;

    for (int i = 0; i < N; i++)
    {
        if (abs(arr[i]) < answer)
        {
            answer = abs(arr[i]);
            index = i;
        }
    }

    cout << total - arr[index] << endl;
    return 0;
}