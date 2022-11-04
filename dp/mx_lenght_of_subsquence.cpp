#include <bits/stdc++.h>
using namespace std;
const int lx = 1e3 + 12;

int a[lx];
int dp[lx];

int main()
{
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];
    for(i = 1; i <= n; i++) dp[i] = 1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < i; j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int ans = 0;
    for(i = 1; i <= n; i++)
        ans = max(ans, dp[i]);

    cout << ans << '\n';
}
