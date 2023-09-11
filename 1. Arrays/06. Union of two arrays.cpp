/*

Union of two arrays
Constraints:
1 ≤ n, m ≤ 105
0 ≤ a[i], b[i] < 105

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(n+m)

*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        /************************************** SOLUTION ***********************************************/
        set<int> unionSet;

        for (int i = 0; i < n; i++)
        {
            unionSet.insert(a[i]);
        }

        for (int i = 0; i < m; i++)
        {
            unionSet.insert(b[i]);
        }

        int count = 0;
        for (auto it : unionSet)
        {
            count++;
        }

        return count;

        /**********************************************************************************************/
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
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
}