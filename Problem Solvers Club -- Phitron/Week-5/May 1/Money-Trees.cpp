#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = 0, ans = 0;
        long long sum = 0;

        while (r < n)
        {
            sum += a[r];
            if (r < n - 1 && sum <= k && b[r] % b[r + 1] == 0)
            {
                ans = max(ans, r - l + 1);
                r++;
            }
            else
            {
                if (((r + 1) < n) && ((b[r] % b[r + 1]) != 0))
                {
                    if (sum <= k)
                    {
                        ans = max(ans, r - l + 1);
                    }
                    l = r + 1;
                    r = l;
                    sum = 0;
                }
                else
                {

                    if (sum <= k)
                    {
                        ans = max(ans, r - l + 1);
                    }
                    sum -= a[l];
                    l++;
                    r++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}