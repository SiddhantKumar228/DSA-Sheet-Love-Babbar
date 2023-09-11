/*

Minimize the Heights II
Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)

Constraints
1 ≤ K ≤ 10^4
1 ≤ N ≤ 10^5
1 ≤ Arr[i] ≤ 10^5

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        /*********************************************** SOLUTION ***************************************************/
        if (n == 1)
            return 0;

        sort(arr, arr + n);

        int diff = arr[n - 1] - arr[0];

        int maxim, minim;
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - k) < 0)
            {
                continue;
            }
            maxim = max(arr[i - 1] + k, arr[n - 1] - k);
            minim = min(arr[0] + k, arr[i] - k);
            diff = min(diff, maxim - minim);
        }
        return diff;

        /**************************************************************************************************************/
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}