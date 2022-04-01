#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i]);
        sum += ans - v[i];
    }
    cout << sum << "\n";
    return 0;
}
