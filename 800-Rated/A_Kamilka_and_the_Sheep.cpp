#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    ll mini = LONG_MAX,maxi = LONG_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        mini = min(temp,mini);   
        maxi = max(temp,maxi);  
    }
    ll ans = maxi - mini;
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
