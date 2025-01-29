#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre compute
    int hashh[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetching
        cout << hashh[number] << endl;
    }

    return 0;
}