/*

Next Permutation
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10000

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextPermutation(int n, vector<int> arr)
    {
        /******************************************* SOLUTION ********************************************/
        int k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (arr[k + 1] > arr[k])
            {
                break;
            }
        }
        if (k == -1)
        {
            reverse(arr.begin(), arr.end());
        }
        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (arr[l] > arr[k])
                {
                    break;
                }
            }
            swap(arr[l], arr[k]);
            reverse(arr.begin() + k + 1, arr.end());
        }
        return arr;
        /***************************************************************************************************/
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}