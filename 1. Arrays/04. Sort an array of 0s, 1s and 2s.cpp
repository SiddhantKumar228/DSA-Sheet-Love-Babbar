/*

Sort an array of 0s, 1s and 2s
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort012(int a[], int n)
    {
        /******************************************** SOLUTION *************************************************/

        int left = 0;
        int right = n - 1;
        int mid = 0;

        while (mid <= right)
        {
            switch (a[mid])
            {
            case 0:
                swap(a[left], a[mid]);
                left++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(a[mid], a[right]);
                right--;
                break;
            }
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
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}