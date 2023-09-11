/*

Kth smallest element
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N

*/

//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        /************************************ SOLUTION ***************************************************************/
        sort(arr, arr + r + 1);
        return (arr[l + k - 1]);
        /************************************************************************************************************/
    }
};

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int number_of_elements;
        cin >> number_of_elements;
        int a[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
            cin >> a[i];

        int k;
        cin >> k;
        Solution ob;
        cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;
    }
    return 0;
}