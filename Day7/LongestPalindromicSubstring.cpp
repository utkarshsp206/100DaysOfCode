#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string ans = "";
    void expand(string &s, int left, int right)
    {
        while (left >= 0 && right <= s.length())
        {
            if (s[left] != s[right])
                break;
            left--;
            right++;
        }
        if (ans.length() < right - left)
            ans = s.substr(left + 1, right - left - 1);
    }

    string longestPalindromiSubstring(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            expand(s, i, i);
            expand(s, i, i + 1);
        }
        return ans;
    }
};

int main()
{
    Solution S;
    string s = "ababbabababbabcdbabdbcbabcbabcbabc";
    cout<<S.longestPalindromiSubstring(s);

    return 0;
}