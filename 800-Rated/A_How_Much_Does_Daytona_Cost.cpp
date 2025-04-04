#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    
    cin >> n >> k;
    vector<int> x(n);
    bool isfound = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if(x[i] == k) isfound = true;
    }
    if(isfound) cout << "YES\n";
    else cout << "NO\n";
    
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
