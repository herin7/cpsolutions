#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int> skills(n);
    for (int i = 0; i < n; i++) cin >> skills[i];
    sort(skills.rbegin(), skills.rend());
    int teams = 0, size = 0;
    for (int i = 0; i < n; i++) {
        size++;
        if (skills[i] * size >= x) {
            teams++;
            size = 0;
        }
    }
    cout << teams << "\n";
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
