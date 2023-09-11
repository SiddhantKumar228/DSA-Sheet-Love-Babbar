/*

Number of 1 Bits
Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10^9

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int setBits(int N)
    {
        /**************************************** SOLUTION ********************************************/
        int count = 0;
        while (N != 0)
        {
            if (N & 1 == 1)
            {
                count++;
            }
            N = N >> 1;
        }
        return count;

        /*********************************************************************************************/
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

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}