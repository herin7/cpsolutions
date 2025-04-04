#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> x(n),ans;
    if(n%2 == 0) {
        cout << -1;
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        x[i] = i + 1;   
    }
    int z = 0;
    int j = 0;
    while(ans.size() < n)
    {
        ans.push_back(x[j % n]);
        j+=2;
        z++;
    }
    for (auto x : ans)
    {
        cout <<  x << " ";
    }
    
    cout << endl;

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
