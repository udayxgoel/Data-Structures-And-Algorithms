#include <bits/stdc++.h>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0, right = s.length() - 1;
        while (left < right)
        {
            if (!isalnum(s[left]))
                left++;
            else if (!isalnum(s[right]))
                right--;
            else if (tolower(s[left]) != tolower(s[right]))
                return false;
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};

int main()
{
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s);

    Solution sol;
    bool ans = sol.isPalindrome(s);

    if (ans)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
