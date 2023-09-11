/*

Palindrome String
Expected Time Complexity: O(Length of S)
Expected Auxiliary Space: O(1)

Constraints:
1 <= Length of S<= 2*10^5

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPalindrome(string S)
    {
        /***************************************** SOLUTION **********************************************/
        int left = 0;
        int right = S.size() - 1;

        while (left < right)
        {
            while (left < right && !isalnum(S[left]))
            {
                left++;
            }

            while (left < right && !isalnum(S[right]))
            {
                right--;
            }

            if (S[left] != S[right])
            {
                return 0;
            }

            left++;
            right--;
        }
        return 1;

        /****************************************************************************************************/
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
}