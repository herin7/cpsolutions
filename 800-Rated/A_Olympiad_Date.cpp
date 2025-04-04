#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) cin >> digits[i];

    int count[10] = {};
    int ans = 0;
    for (int i = 0; i < n; i++) {
        count[digits[i]]++;
        if (count[0] >= 3 && count[1] >= 1 && count[2] >= 2 && count[3] >= 1 && count[5] >= 1) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
