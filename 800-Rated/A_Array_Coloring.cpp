#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
        int n;cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x%2!=0)cnt++;
        }
        if(cnt%2==0)cout<<"YES\n";
        else cout<<"NO\n";
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
