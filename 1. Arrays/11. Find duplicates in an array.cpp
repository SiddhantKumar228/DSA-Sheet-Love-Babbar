/*

Find duplicates in an array
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 <= N <= 105
0 <= A[i] <= N-1, for each valid i

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        /****************************************** SOLUTION *************************************************/
        vector<int> result;

        int arr1[n] = {0};

        for (int i = 0; i < n; i++)
        {
            int index = arr[i];
            arr1[index]++;
        }

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > 1)
            {
                result.push_back(i);
                flag = 0;
            }
        }

        if (flag == 1)
        {
            result.push_back(-1);
        }

        return result;

        /*********************************************************************************************************/
    }
};

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
