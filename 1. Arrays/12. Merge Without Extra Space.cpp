/*

Merge Without Extra Space
Expected Time Complexity:  O((n+m) log(n+m))
Expected Auxilliary Space: O(1)

Constraints:
1 <= n, m <= 10^5
0 <= arr1i, arr2i <= 10^7

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        /******************************************** SOLUTION *************************************************/
        int i = n - 1;
        int j = 0;
        int k = 0;

        while (i >= 0 && j < m)
        {
            if (arr1[i] > arr2[j])
            {
                swap(arr1[i], arr2[j]);
                i--;
                j++;
            }
            else
            {
                break;
            }
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);

        /*******************************************************************************************************/
    }
};

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        long long arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";

        for (int i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}