/*

Count pairs with given sum

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 10^5
1 <= K <= 10^8
1 <= Arr[i] <= 10^6

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        /********************************** SOLUTION ************************************************/

        int ans = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int val = k - arr[i];
            if (m[val])
            {
                ans += m[val];
            }
            m[arr[i]]++;
        }
        return ans;

        /********************************************************************************************/
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}