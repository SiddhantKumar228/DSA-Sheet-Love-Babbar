/*

Search in a row-column sorted Matrix
Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N, M <= 1000
1 <= mat[][] <= 105
1 <= X <= 1000

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool search(vector<vector<int>> matrix, int n, int m, int x)
    {
        /******************************************* SOLUTION ******************************************************/
        int i = 0;
        int j = m - 1;

        while (i < n && j < m)
        {

            if (matrix[i][j] == x)
            {
                return true;
            }

            else if (matrix[i][j] > x)
            {
                j--;
            }

            else
            {
                i++;
            }
        }
        return false;

        /****************************************************************************************************************/
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n);

        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.search(matrix, n, m, x))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}