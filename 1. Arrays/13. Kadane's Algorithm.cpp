/*

Kadane's Algorithm
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10^6
-107 ≤ A[i] ≤ 10^7

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxSubarraySum(int arr[], int n)
    {
        /*************************************** SOLUTION **************************************************/

        long long sum = 0;
        long long max_sum = arr[0];

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            max_sum = max(sum, max_sum);

            if (sum < 0)
            {
                sum = 0;
            }
        }
        return max_sum;

        /***************************************************************************************************/
    }
};

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
