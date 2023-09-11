/*

Overlapping Intervals
Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(Log(N)) or O(N).

Constraints:
1 ≤ N ≤ 100
0 ≤ x ≤ y ≤ 1000

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>> &arr)
    {
        /****************************************** SOLUTION **************************************/
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            int start = arr[i][0];
            int end = arr[i][1];

            if (!ans.empty() && end <= ans.back()[1])
            {
                continue;
            }

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j][0] <= end)
                {
                    end = max(end, arr[j][1]);
                }
                else
                {
                    break;
                }
            }
            ans.push_back({start, end});
        }

        return ans;
        /*******************************************************************************************************/
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> Intervals(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            Intervals[i].push_back(x);
            Intervals[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.overlappedInterval(Intervals);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}