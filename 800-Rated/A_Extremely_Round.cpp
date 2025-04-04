#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void solve()
{
    long long  n;
    cin>>n;
    int d = floor(log10(n)) + 1;
    int f = n / (int)pow(10, d - 1);
    int ans = 9 * (d - 1) + f;
    cout << ans << endl;

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
