#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string x;
    int ans = n;
    cin >> x;
    int l = 0,h = n - 1;

    while(x[l] != x[h])
        {
            ans-=2;
            l++;
            h--;
        }
    if(ans < 0) ans = 0;
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
