/*

Reverse an Array
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        /******************************************** SOLUTION *************************************************/

        int left = 0;
        int right = str.size() - 1;

        while (left < right)
        {
            swap(str[left], str[right]);
            left++;
            right--;
        }
        return str;

        /*******************************************************************************************************/
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}
