#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, limit;
    cin >> n >> limit;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll l = 0, h = v.size() - 1, ans = 0;
    while (l <= h)
    {
        ll temp = v[l] + v[h];
        if (temp <= limit)
            l++, h--, ans++;
        else
            h--, ans++;
    }
    cout << ans;
    return 0;
}