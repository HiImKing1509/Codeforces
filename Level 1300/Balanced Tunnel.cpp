/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pll pair<ll, ll>
#define psl pair<string, ll>

ll BinarySearch(vector<ll>&arr, ll xx)
{
        ll left = 0;
        ll right = arr.size() - 1;
        while (left <= right)
        {
                ll mid = (left + right) / 2;

                if (arr[mid] == xx)
                        return mid;
                if (arr[mid] > xx)
                        right = mid - 1;
                if (arr[mid] < xx)
                        left = mid + 1;
        }
        return -1;
}
ll GCD(ll a, ll b)
{
        while (b)
        {
                a = a % b;
                swap(a, b);
        }
        return a;
}
ll FirstGreaterElement(vector<ll>& arr, ll xx)
{
        ll len = arr.size() - 1;
        ll st = 0;
        ll ans = -1;
        while (st <= len)
        {
                ll mid = (st + len) / 2;
                if (arr[mid] < xx)
                        st = mid + 1;
                else
                {
                        ans = mid;
                        len = mid - 1;
                }
        }
        return ans;
}

void prefixMax(vector<ll>& a, vector<ll>& dp) // Bottom - up
{
        dp[0] = 0;
        for (ll i = 1; i < a.size(); i++)
                dp[i] = max(dp[i - 1], a[i - 1]);
}

void SolveProblem()
{
        ll n; cin >> n;

        vector<ll>a(n);
        vector<ll>b(n);
        vector<ll>p(n);
        vector<ll>c(n);
        for (ll i = 0; i < n; i++)
        {
                cin >> a[i];
                a[i]--;
        }
        for (ll i = 0; i < n; i++)
        {
                cin >> b[i];
                b[i]--;
        }
        for (ll i = 0; i < n; i++) p[b[i]] = i;
        for (ll i = 0; i < n; i++) c[i] = p[a[i]];

        vector<ll>prefix(n);

        prefixMax(c, prefix);

        ll res = 0;
        for (ll i = 0; i < n; i++)
                if (c[i] < prefix[i])
                        res++;

        cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //_TestCases_
        SolveProblem();
    return 0;
}

// Shortcut key for comment in Visual Studio 2019: Ctrl + K + C
// Shortcut key for uncomment in Visual Studio 2019: Ctrl + K + U
