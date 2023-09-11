/*

Find minimum and maximum element in an array
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^5
1 <= Ai <=10^12

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

pair<long long, long long> getMinMax(long long a[], int n)
{
    /**************************************** SOLUTION ********************************************/

    ll max_num = LLONG_MIN;
    ll min_num = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        max_num = max(a[i], max_num);
        min_num = min(a[i], min_num);
    }
    return make_pair(min_num, max_num);

    /********************************************************************************************/
}