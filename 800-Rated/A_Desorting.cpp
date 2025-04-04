#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n);
    // cin >> x[0];
    int diff = 1e9;
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (i > 0) {
            diff = min(x[i] - x[i - 1], diff);
            sorted &= x[i] >= x[i - 1];
        }
    }
    if (!sorted) {
        cout << 0 << endl;
        return;        
    }
    cout << diff/2 + 1 << endl;
    return;
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
