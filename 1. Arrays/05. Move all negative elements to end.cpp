/*

Move all negative elements to end
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
-105 ≤ arr[] ≤ 105

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void segregateElements(int arr[], int n)
    {

        /******************************************** SOLUTION *************************************************/
        int index = 0;
        int *neg_array = new int[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                neg_array[index++] = arr[i];
            }
        }
        int neg_size = index;

        index = 0;
        int *pos_array = new int[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                pos_array[index++] = arr[i];
            }
        }
        int pos_size = index;

        for (int i = 0; i < pos_size; i++)
        {
            arr[i] = pos_array[i];
        }

        for (int i = 0; i < neg_size; i++)
        {
            arr[i + pos_size] = neg_array[i];
        }
        /*******************************************************************************************************/
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.segregateElements(a, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}