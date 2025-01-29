#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // pre compute
    int hashh[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetching
        cout << hashh[c] << endl;
    }

    return 0;
}